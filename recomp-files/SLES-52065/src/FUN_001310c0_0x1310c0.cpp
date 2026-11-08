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

// Function: FUN_001310c0
// Address: 0x1310c0 - 0x131134
void FUN_001310c0_0x1310c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001310c0_0x1310c0");
#endif

    switch (ctx->pc) {
        case 0x131108u: goto label_131108;
        default: break;
    }

    ctx->pc = 0x1310c0u;

    // 0x1310c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1310c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1310c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1310c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1310c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1310c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1310cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1310ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1310d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1310d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1310d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1310d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1310d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310dc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1310dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1310e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1310e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1310e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1310e8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1310e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1310ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1310ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1310f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1310f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1310f4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1310f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1310f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1310f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1310fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1310fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x131100: 0xc0401a4  jal         func_100690
    ctx->pc = 0x131100u;
    SET_GPR_U32(ctx, 31, 0x131108u);
    ctx->pc = 0x131104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131100u;
    // 0x131104: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x131100u, 0x131108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131108u;
label_131108:
    // 0x131108: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x131108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13110c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131110: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x131110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x131114: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x131114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131118: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x131118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x13111c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13111cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13112c: 0x3e00008  jr          $ra
    ctx->pc = 0x13112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13112Cu;
        // 0x131130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131134u;
}
