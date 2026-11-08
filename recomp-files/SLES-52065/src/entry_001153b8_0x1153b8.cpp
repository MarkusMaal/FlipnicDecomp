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

// Function: entry_001153b8
// Address: 0x1153b8 - 0x1153fc
void entry_001153b8_0x1153b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153b8_0x1153b8");
#endif

    ctx->pc = 0x1153b8u;

    // 0x1153b8: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x1153b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x1153bc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1153bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1153c0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1153c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1153c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153c8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1153c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1153cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1153d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1153d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1153d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1153d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1153d8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1153d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    // 0x1153dc: 0xae430264  sw          $v1, 0x264($s2)
    ctx->pc = 0x1153dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 3));
    // 0x1153e0: 0x8c22e4f8  lw          $v0, -0x1B08($at)
    ctx->pc = 0x1153e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
    // 0x1153e4: 0xae420268  sw          $v0, 0x268($s2)
    ctx->pc = 0x1153e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 2));
    // 0x1153e8: 0xa2430284  sb          $v1, 0x284($s2)
    ctx->pc = 0x1153e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 3));
    // 0x1153ec: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x1153ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x1153f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1153f4: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x1153F4u;
    {
        const bool branch_taken_0x1153f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153F4u;
        // 0x1153f8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153f4) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x1153FCu;
}
