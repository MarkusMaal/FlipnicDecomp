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

// Function: entry_00112b24
// Address: 0x112b24 - 0x112b60
void entry_00112b24_0x112b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b24_0x112b24");
#endif

    ctx->pc = 0x112b24u;

    // 0x112b24: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x112b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112b28: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112b2c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x112b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112b30: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112b34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112b38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112b3c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112b40: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x112b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x112b44: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x112b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x112b48: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x112b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x112b4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112B4Cu;
    {
        const bool branch_taken_0x112b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112b4c) {
            ctx->pc = 0x112B60u;
            return;
        }
    }
    ctx->pc = 0x112B54u;
    // 0x112b54: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x112b58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x112b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x112b5c: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x112b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x112b60u;
}
