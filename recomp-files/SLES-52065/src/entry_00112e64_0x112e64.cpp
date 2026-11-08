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

// Function: entry_00112e64
// Address: 0x112e64 - 0x112eb8
void entry_00112e64_0x112e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e64_0x112e64");
#endif

    switch (ctx->pc) {
        case 0x112e6cu: goto label_112e6c;
        default: break;
    }

    ctx->pc = 0x112e64u;

    // 0x112e64: 0xc044254  jal         func_110950
    ctx->pc = 0x112E64u;
    SET_GPR_U32(ctx, 31, 0x112E6Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112E64u, 0x112E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E6Cu;
label_112e6c:
    // 0x112e6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112e70: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x112e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x112e74: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x112e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x112e78: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112e7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112e80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x112e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112e84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112e88: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x112e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x112e8c: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x112e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x112e90: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x112e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x112e94: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x112E94u;
    {
        const bool branch_taken_0x112e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112e94) {
            ctx->pc = 0x112EB8u;
            return;
        }
    }
    ctx->pc = 0x112E9Cu;
    // 0x112e9c: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x112ea0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x112ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x112ea4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x112ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x112ea8: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x112ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    // 0x112eac: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x112eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x112eb0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x112eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x112eb4: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x112eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x112eb8u;
}
