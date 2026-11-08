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

// Function: entry_001116f8
// Address: 0x1116f8 - 0x111744
void entry_001116f8_0x1116f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001116f8_0x1116f8");
#endif

    ctx->pc = 0x1116f8u;

    // 0x1116f8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1116f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1116fc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1116fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111700: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111704: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11170c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111710: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x111710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111714: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x111714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111718: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11171c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111720u;
    {
        const bool branch_taken_0x111720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111720) {
            ctx->pc = 0x111744u;
            return;
        }
    }
    ctx->pc = 0x111728u;
    // 0x111728: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11172c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11172cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111730: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111734: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x111738: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11173c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11173cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x111740: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x111744u;
}
