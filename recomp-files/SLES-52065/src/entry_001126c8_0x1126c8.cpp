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

// Function: entry_001126c8
// Address: 0x1126c8 - 0x112714
void entry_001126c8_0x1126c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001126c8_0x1126c8");
#endif

    ctx->pc = 0x1126c8u;

    // 0x1126c8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1126c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1126cc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1126ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1126d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1126d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1126d4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1126d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1126d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1126d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1126dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1126dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1126e0: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x1126e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1126e4: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x1126e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1126e8: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1126e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1126ec: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1126ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1126f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1126F0u;
    {
        const bool branch_taken_0x1126f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1126f0) {
            ctx->pc = 0x112714u;
            return;
        }
    }
    ctx->pc = 0x1126F8u;
    // 0x1126f8: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1126f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1126fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1126fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x112700: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x112700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x112704: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x112704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x112708: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x112708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11270c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x11270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x112710: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x112710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x112714u;
}
