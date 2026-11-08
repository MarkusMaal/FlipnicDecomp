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

// Function: FUN_00132470
// Address: 0x132470 - 0x1324e4
void FUN_00132470_0x132470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132470_0x132470");
#endif

    switch (ctx->pc) {
        case 0x1324b8u: goto label_1324b8;
        default: break;
    }

    ctx->pc = 0x132470u;

    // 0x132470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132474: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x132474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x132478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13247c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132488: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x132488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13248c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132490: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x132490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132494: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x132494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x132498: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x132498u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13249c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1324a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1324a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1324a4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1324a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1324a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1324a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1324ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1324acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1324b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1324B0u;
    SET_GPR_U32(ctx, 31, 0x1324B8u);
    ctx->pc = 0x1324B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1324B0u;
    // 0x1324b4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1324B0u, 0x1324B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324B8u;
label_1324b8:
    // 0x1324b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1324b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1324bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1324bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1324c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1324c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1324c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1324c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1324c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1324c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1324cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1324ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1324d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1324d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1324d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1324d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1324d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1324d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1324dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1324DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324DCu;
        // 0x1324e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1324DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1324E4u;
}
