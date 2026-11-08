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

// Function: FUN_00165c80
// Address: 0x165c80 - 0x165cbc
void FUN_00165c80_0x165c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165c80_0x165c80");
#endif

    switch (ctx->pc) {
        case 0x165c94u: goto label_165c94;
        case 0x165cacu: goto label_165cac;
        default: break;
    }

    ctx->pc = 0x165c80u;

    // 0x165c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165c8c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x165C8Cu;
    SET_GPR_U32(ctx, 31, 0x165C94u);
    ctx->pc = 0x165C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C8Cu;
    // 0x165c90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x165C8Cu, 0x165C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C94u;
label_165c94:
    // 0x165c94: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x165c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x165c98: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x165c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165c9c: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x165c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x165ca0: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x165ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x165ca4: 0xc056270  jal         func_1589C0
    ctx->pc = 0x165CA4u;
    SET_GPR_U32(ctx, 31, 0x165CACu);
    ctx->pc = 0x165CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CA4u;
    // 0x165ca8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1589C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589C0u, 0x165CA4u, 0x165CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165CACu;
label_165cac:
    // 0x165cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x165CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CB4u;
        // 0x165cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165CBCu;
}
