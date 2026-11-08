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

// Function: FUN_0017b8c0
// Address: 0x17b8c0 - 0x17b928
void FUN_0017b8c0_0x17b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b8c0_0x17b8c0");
#endif

    switch (ctx->pc) {
        case 0x17b900u: goto label_17b900;
        case 0x17b91cu: goto label_17b91c;
        default: break;
    }

    ctx->pc = 0x17b8c0u;

    // 0x17b8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b8c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b8cc: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17B8CCu;
    {
        const bool branch_taken_0x17b8cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8CCu;
        // 0x17b8d0: 0xa0850221  sb          $a1, 0x221($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 545), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8cc) {
            ctx->pc = 0x17B908u;
            goto label_17b908;
        }
    }
    ctx->pc = 0x17B8D4u;
    // 0x17b8d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b8d8: 0x80450024  lb          $a1, 0x24($v0)
    ctx->pc = 0x17b8d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17b8dc: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B8DCu;
    {
        const bool branch_taken_0x17b8dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b8dc) {
            ctx->pc = 0x17B8E8u;
            goto label_17b8e8;
        }
    }
    ctx->pc = 0x17B8E4u;
    // 0x17b8e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b8e8:
    // 0x17b8e8: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x17b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x17b8ec: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b8f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b8f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17b8f8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B8F8u;
    SET_GPR_U32(ctx, 31, 0x17B900u);
    ctx->pc = 0x17B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8F8u;
    // 0x17b8fc: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B8F8u, 0x17B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B900u;
label_17b900:
    // 0x17b900: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B900u;
    {
        const bool branch_taken_0x17b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B900u;
        // 0x17b904: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b900) {
            ctx->pc = 0x17B920u;
            goto label_17b920;
        }
    }
    ctx->pc = 0x17B908u;
label_17b908:
    // 0x17b908: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x17b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x17b90c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b910: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b914: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B914u;
    SET_GPR_U32(ctx, 31, 0x17B91Cu);
    ctx->pc = 0x17B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B914u;
    // 0x17b918: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B914u, 0x17B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B91Cu;
label_17b91c:
    // 0x17b91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b920:
    // 0x17b920: 0x3e00008  jr          $ra
    ctx->pc = 0x17B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B920u;
        // 0x17b924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B928u;
}
