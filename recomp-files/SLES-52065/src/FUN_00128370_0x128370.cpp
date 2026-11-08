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

// Function: FUN_00128370
// Address: 0x128370 - 0x1283c0
void FUN_00128370_0x128370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128370_0x128370");
#endif

    switch (ctx->pc) {
        case 0x128384u: goto label_128384;
        default: break;
    }

    ctx->pc = 0x128370u;

    // 0x128370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12837c: 0xc0497a0  jal         func_125E80
    ctx->pc = 0x12837Cu;
    SET_GPR_U32(ctx, 31, 0x128384u);
    ctx->pc = 0x128380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12837Cu;
    // 0x128380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E80u, 0x12837Cu, 0x128384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128384u;
label_128384:
    // 0x128384: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x128384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x128388: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x128388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12838c: 0x24638a00  addiu       $v1, $v1, -0x7600
    ctx->pc = 0x12838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937088));
    // 0x128390: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x128390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x128394: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x128394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x128398: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x128398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12839c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x12839cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1283a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1283a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283a4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1283a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1283a8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1283a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1283ac: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1283acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x1283b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1283b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1283b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1283b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1283b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1283B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1283BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283B8u;
        // 0x1283bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1283B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1283C0u;
}
