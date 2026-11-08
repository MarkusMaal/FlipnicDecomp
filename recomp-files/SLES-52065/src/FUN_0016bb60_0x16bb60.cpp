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

// Function: FUN_0016bb60
// Address: 0x16bb60 - 0x16bba8
void FUN_0016bb60_0x16bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bb60_0x16bb60");
#endif

    switch (ctx->pc) {
        case 0x16bb74u: goto label_16bb74;
        default: break;
    }

    ctx->pc = 0x16bb60u;

    // 0x16bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bb68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bb6c: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x16BB6Cu;
    SET_GPR_U32(ctx, 31, 0x16BB74u);
    ctx->pc = 0x16BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BB6Cu;
    // 0x16bb70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x16BB6Cu, 0x16BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB74u;
label_16bb74:
    // 0x16bb74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bb78: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x16bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x16bb7c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16bb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16bb80: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x16bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bb84: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x16bb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x16bb88: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x16bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
    // 0x16bb8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bb90: 0x80630024  lb          $v1, 0x24($v1)
    ctx->pc = 0x16bb90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16bb94: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x16bb94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bb9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bba0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBA0u;
        // 0x16bba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BBA8u;
}
