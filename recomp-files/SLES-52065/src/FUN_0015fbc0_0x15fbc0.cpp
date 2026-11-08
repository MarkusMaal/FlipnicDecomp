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

// Function: FUN_0015fbc0
// Address: 0x15fbc0 - 0x15fc10
void FUN_0015fbc0_0x15fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fbc0_0x15fbc0");
#endif

    switch (ctx->pc) {
        case 0x15fbfcu: goto label_15fbfc;
        default: break;
    }

    ctx->pc = 0x15fbc0u;

    // 0x15fbc0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15fbc4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15fbc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15fbc8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x15fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15fbcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15fbd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15fbd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fbd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15fbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fbe0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15fbe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15fbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fbec: 0xe46c0200  swc1        $f12, 0x200($v1)
    ctx->pc = 0x15fbecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 512), bits); }
    // 0x15fbf0: 0xe46c00a0  swc1        $f12, 0xA0($v1)
    ctx->pc = 0x15fbf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x15fbf4: 0xc057f74  jal         func_15FDD0
    ctx->pc = 0x15FBF4u;
    SET_GPR_U32(ctx, 31, 0x15FBFCu);
    ctx->pc = 0x15FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FBF4u;
    // 0x15fbf8: 0xa0620234  sb          $v0, 0x234($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 564), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x15FBF4u, 0x15FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBFCu;
label_15fbfc:
    // 0x15fbfc: 0xae022cd0  sw          $v0, 0x2CD0($s0)
    ctx->pc = 0x15fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11472), GPR_U32(ctx, 2));
    // 0x15fc00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15fc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x15FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC08u;
        // 0x15fc0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FC10u;
}
