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

// Function: entry_00150abc
// Address: 0x150abc - 0x150b08
void entry_00150abc_0x150abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150abc_0x150abc");
#endif

    switch (ctx->pc) {
        case 0x150aecu: goto label_150aec;
        case 0x150af8u: goto label_150af8;
        default: break;
    }

    ctx->pc = 0x150abcu;

    // 0x150abc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x150abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x150ac0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x150ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150ac4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x150ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x150ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150acc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x150ad0: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x150ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x150ad4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x150ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x150ad8: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x150adc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x150ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150ae4: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x150AE4u;
    SET_GPR_U32(ctx, 31, 0x150AECu);
    ctx->pc = 0x150AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AE4u;
    // 0x150ae8: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x150AE4u, 0x150AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AECu;
label_150aec:
    // 0x150aec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150af0: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x150AF0u;
    SET_GPR_U32(ctx, 31, 0x150AF8u);
    ctx->pc = 0x150AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AF0u;
    // 0x150af4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x150AF0u, 0x150AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AF8u;
label_150af8:
    // 0x150af8: 0x8fb200a4  lw          $s2, 0xA4($sp)
    ctx->pc = 0x150af8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x150afc: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x150b00: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x150B00u;
    {
        const bool branch_taken_0x150b00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x150B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B00u;
        // 0x150b04: 0x8fb100a0  lw          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b00) {
            ctx->pc = 0x150B38u;
            return;
        }
    }
    ctx->pc = 0x150B08u;
}
