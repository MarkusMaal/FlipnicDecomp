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

// Function: entry_00113294
// Address: 0x113294 - 0x1132e8
void entry_00113294_0x113294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113294_0x113294");
#endif

    switch (ctx->pc) {
        case 0x11329cu: goto label_11329c;
        default: break;
    }

    ctx->pc = 0x113294u;

    // 0x113294: 0xc044254  jal         func_110950
    ctx->pc = 0x113294u;
    SET_GPR_U32(ctx, 31, 0x11329Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113294u, 0x11329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11329Cu;
label_11329c:
    // 0x11329c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1132a0: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x1132a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x1132a4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1132a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1132a8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1132a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1132ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1132acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1132b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1132b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1132b8: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x1132b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1132bc: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x1132bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x1132c0: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x1132c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x1132c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1132C4u;
    {
        const bool branch_taken_0x1132c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132c4) {
            ctx->pc = 0x1132E8u;
            return;
        }
    }
    ctx->pc = 0x1132CCu;
    // 0x1132cc: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1132ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1132d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1132d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1132d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1132d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1132d8: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1132d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    // 0x1132dc: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1132dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1132e0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1132e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1132e4: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1132e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x1132e8u;
}
