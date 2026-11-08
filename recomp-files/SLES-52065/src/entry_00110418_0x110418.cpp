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

// Function: entry_00110418
// Address: 0x110418 - 0x110464
void entry_00110418_0x110418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110418_0x110418");
#endif

    ctx->pc = 0x110418u;

    // 0x110418: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x110418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11041c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110420: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x110424: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11042c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110430: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x110430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110434: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x110434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x110438: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11043c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110440: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110440u;
    {
        const bool branch_taken_0x110440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110440) {
            ctx->pc = 0x110464u;
            return;
        }
    }
    ctx->pc = 0x110448u;
    // 0x110448: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x110448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11044c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11044cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x110450: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x110450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x110454: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x110454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x110458: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x110458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11045c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x11045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x110460: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x110460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x110464u;
}
