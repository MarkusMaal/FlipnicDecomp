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

// Function: entry_0010f068
// Address: 0x10f068 - 0x10f0e0
void entry_0010f068_0x10f068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f068_0x10f068");
#endif

    switch (ctx->pc) {
        case 0x10f0ccu: goto label_10f0cc;
        case 0x10f0d8u: goto label_10f0d8;
        default: break;
    }

    ctx->pc = 0x10f068u;

    // 0x10f068: 0x922a0230  lbu         $t2, 0x230($s1)
    ctx->pc = 0x10f068u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x10f06c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x10f070: 0x64090008  daddiu      $t1, $zero, 0x8
    ctx->pc = 0x10f070u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x10f074: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x10f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f078: 0x30070007  andi        $a3, $zero, 0x7
    ctx->pc = 0x10f078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x10f07c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x10f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x10f080: 0x64030010  daddiu      $v1, $zero, 0x10
    ctx->pc = 0x10f080u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x10f084: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x10f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x10f088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f08c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x10f08cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x10f090: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x10f090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x10f094: 0xa2280230  sb          $t0, 0x230($s1)
    ctx->pc = 0x10f094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 8));
    // 0x10f098: 0x92280230  lbu         $t0, 0x230($s1)
    ctx->pc = 0x10f098u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x10f09c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x10f09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x10f0a0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x10f0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x10f0a4: 0xa2240230  sb          $a0, 0x230($s1)
    ctx->pc = 0x10f0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 4));
    // 0x10f0a8: 0x92240230  lbu         $a0, 0x230($s1)
    ctx->pc = 0x10f0a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x10f0ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f0b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f0b4: 0xa2220230  sb          $v0, 0x230($s1)
    ctx->pc = 0x10f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 2));
    // 0x10f0b8: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x10f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10f0bc: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10f0c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10f0c4: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10F0C4u;
    SET_GPR_U32(ctx, 31, 0x10F0CCu);
    ctx->pc = 0x10F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0C4u;
    // 0x10f0c8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10F0C4u, 0x10F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0CCu;
label_10f0cc:
    // 0x10f0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0d0: 0xc042118  jal         func_108460
    ctx->pc = 0x10F0D0u;
    SET_GPR_U32(ctx, 31, 0x10F0D8u);
    ctx->pc = 0x10F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0D0u;
    // 0x10f0d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F0D0u, 0x10F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0D8u;
label_10f0d8:
    // 0x10f0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f0dc: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x10f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
    ctx->pc = 0x10f0e0u;
}
