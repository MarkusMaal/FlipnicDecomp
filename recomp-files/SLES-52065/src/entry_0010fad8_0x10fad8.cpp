#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010fad8
// Address: 0x10fad8 - 0x10fb14
void entry_0010fad8_0x10fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fad8_0x10fad8");
#endif

    switch (ctx->pc) {
        case 0x10fb0cu: goto label_10fb0c;
        default: break;
    }

    ctx->pc = 0x10fad8u;

    // 0x10fad8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x10fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x10fadc: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10fae0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x10fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x10fae4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10fae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10fae8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10fae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10faec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10faecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10faf0: 0x8c712cd8  lw          $s1, 0x2CD8($v1)
    ctx->pc = 0x10faf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x10faf4: 0x92230225  lbu         $v1, 0x225($s1)
    ctx->pc = 0x10faf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 549)));
    // 0x10faf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x10faf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10fafc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FAFCu;
    {
        const bool branch_taken_0x10fafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAFCu;
        // 0x10fb00: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fafc) {
            ctx->pc = 0x10FB14u;
            return;
        }
    }
    ctx->pc = 0x10FB04u;
    // 0x10fb04: 0xc043f7c  jal         func_10FDF0
    ctx->pc = 0x10FB04u;
    SET_GPR_U32(ctx, 31, 0x10FB0Cu);
    ctx->pc = 0x10FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB04u;
    // 0x10fb08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDF0u, 0x10FB04u, 0x10FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB0Cu;
label_10fb0c:
    // 0x10fb0c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x10FB0Cu;
    {
        const bool branch_taken_0x10fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB0Cu;
        // 0x10fb10: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb0c) {
            ctx->pc = 0x10FC0Cu;
            return;
        }
    }
    ctx->pc = 0x10FB14u;
}
