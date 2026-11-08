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

// Function: entry_0010ff30
// Address: 0x10ff30 - 0x10ff7c
void entry_0010ff30_0x10ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff30_0x10ff30");
#endif

    ctx->pc = 0x10ff30u;

    // 0x10ff30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10ff34: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10ff38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10ff3c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10ff3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ff40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ff44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ff48: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x10ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x10ff4c: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x10ff4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10ff50: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x10ff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x10ff54: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10ff54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10ff58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FF58u;
    {
        const bool branch_taken_0x10ff58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ff58) {
            ctx->pc = 0x10FF7Cu;
            return;
        }
    }
    ctx->pc = 0x10FF60u;
    // 0x10ff60: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x10ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10ff64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10ff68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10ff6c: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x10ff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x10ff70: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x10ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10ff74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x10ff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x10ff78: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x10ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x10ff7cu;
}
