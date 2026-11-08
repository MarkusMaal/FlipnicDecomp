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

// Function: entry_0013f24c
// Address: 0x13f24c - 0x13f298
void entry_0013f24c_0x13f24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f24c_0x13f24c");
#endif

    switch (ctx->pc) {
        case 0x13f27cu: goto label_13f27c;
        case 0x13f288u: goto label_13f288;
        default: break;
    }

    ctx->pc = 0x13f24cu;

    // 0x13f24c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x13f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13f250: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13f254: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x13f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13f258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f25c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x13f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x13f260: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x13f260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x13f264: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13f268: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x13f268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13f26c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13f270: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f274: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13F274u;
    SET_GPR_U32(ctx, 31, 0x13F27Cu);
    ctx->pc = 0x13F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F274u;
    // 0x13f278: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13F274u, 0x13F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F27Cu;
label_13f27c:
    // 0x13f27c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f280: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x13F280u;
    SET_GPR_U32(ctx, 31, 0x13F288u);
    ctx->pc = 0x13F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F280u;
    // 0x13f284: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x13F280u, 0x13F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F288u;
label_13f288:
    // 0x13f288: 0x8fb200a4  lw          $s2, 0xA4($sp)
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x13f28c: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x13f28cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13f290: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x13F290u;
    {
        const bool branch_taken_0x13f290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x13F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F290u;
        // 0x13f294: 0x8fb100a0  lw          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f290) {
            ctx->pc = 0x13F2C8u;
            return;
        }
    }
    ctx->pc = 0x13F298u;
}
