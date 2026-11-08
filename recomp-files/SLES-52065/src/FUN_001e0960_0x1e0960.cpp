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

// Function: FUN_001e0960
// Address: 0x1e0960 - 0x1e09e4
void FUN_001e0960_0x1e0960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0960_0x1e0960");
#endif

    switch (ctx->pc) {
        case 0x1e09d4u: goto label_1e09d4;
        default: break;
    }

    ctx->pc = 0x1e0960u;

    // 0x1e0960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0964: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e0964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e096c: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x1e096cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
    // 0x1e0970: 0x3c0a00ff  lui         $t2, 0xFF
    ctx->pc = 0x1e0970u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)255 << 16));
    // 0x1e0974: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e0974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e0978: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1e0978u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e097c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1e097cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1e0980: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e0980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e0984: 0x8c4c0010  lw          $t4, 0x10($v0)
    ctx->pc = 0x1e0984u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e0988: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1e0988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1e098c: 0x8c4b000c  lw          $t3, 0xC($v0)
    ctx->pc = 0x1e098cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e0990: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x1e0990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x1e0994: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x1e0994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e0998: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e0998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e099c: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1e099cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e09a0: 0x1894824  and         $t1, $t4, $t1
    ctx->pc = 0x1e09a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 9));
    // 0x1e09a4: 0x3108ff00  andi        $t0, $t0, 0xFF00
    ctx->pc = 0x1e09a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x1e09a8: 0xb3202  srl         $a2, $t3, 8
    ctx->pc = 0x1e09a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1e09ac: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1e09acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1e09b0: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x1e09b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x1e09b4: 0x94c02  srl         $t1, $t1, 16
    ctx->pc = 0x1e09b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1e09b8: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x1e09b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1e09bc: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x1e09bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x1e09c0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1e09c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1e09c4: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x1e09c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x1e09c8: 0x1863025  or          $a2, $t4, $a2
    ctx->pc = 0x1e09c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x1e09cc: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1E09CCu;
    SET_GPR_U32(ctx, 31, 0x1E09D4u);
    ctx->pc = 0x1E09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09CCu;
    // 0x1e09d0: 0x1673825  or          $a3, $t3, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1E09CCu, 0x1E09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09D4u;
label_1e09d4:
    // 0x1e09d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e09d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e09d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E09DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09DCu;
        // 0x1e09e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E09DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E09E4u;
}
