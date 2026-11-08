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

// Function: entry_00111f30
// Address: 0x111f30 - 0x111f7c
void entry_00111f30_0x111f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111f30_0x111f30");
#endif

    ctx->pc = 0x111f30u;

    // 0x111f30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x111f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111f34: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111f38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111f3c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111f40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111f48: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x111f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111f4c: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x111f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111f50: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x111f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x111f54: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111f58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111F58u;
    {
        const bool branch_taken_0x111f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111f58) {
            ctx->pc = 0x111F7Cu;
            return;
        }
    }
    ctx->pc = 0x111F60u;
    // 0x111f60: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111f64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x111f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111f68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111f6c: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x111f70: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111f74: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x111f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x111f78: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x111f7cu;
}
