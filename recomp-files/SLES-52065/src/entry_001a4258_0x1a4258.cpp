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

// Function: entry_001a4258
// Address: 0x1a4258 - 0x1a42cc
void entry_001a4258_0x1a4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4258_0x1a4258");
#endif

    ctx->pc = 0x1a4258u;

    // 0x1a4258: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a4258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x1a425c: 0x82830024  lb          $v1, 0x24($s4)
    ctx->pc = 0x1a425cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1a4260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4264: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a4268: 0xa04306b4  sb          $v1, 0x6B4($v0)
    ctx->pc = 0x1a4268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1716), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a426c: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x1a4270: 0x82830028  lb          $v1, 0x28($s4)
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1a4274: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4278: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a427c: 0xa04306b5  sb          $v1, 0x6B5($v0)
    ctx->pc = 0x1a427cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1717), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4280: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x1a4284: 0x8283002c  lb          $v1, 0x2C($s4)
    ctx->pc = 0x1a4284u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1a4288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a428c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a4290: 0xa04306b6  sb          $v1, 0x6B6($v0)
    ctx->pc = 0x1a4290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1718), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4294: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x1a4298: 0x82830030  lb          $v1, 0x30($s4)
    ctx->pc = 0x1a4298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1a429c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a429cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a42a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a42a4: 0xa04306b7  sb          $v1, 0x6B7($v0)
    ctx->pc = 0x1a42a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1719), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a42a8: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x1a42ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a42b0: 0xae2206b0  sw          $v0, 0x6B0($s1)
    ctx->pc = 0x1a42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 2));
    // 0x1a42b4: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x1a42b8: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x1a42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1a42bc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a42bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a42c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A42C0u;
    {
        const bool branch_taken_0x1a42c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a42c0) {
            ctx->pc = 0x1A42CCu;
            return;
        }
    }
    ctx->pc = 0x1A42C8u;
    // 0x1a42c8: 0xae230938  sw          $v1, 0x938($s1)
    ctx->pc = 0x1a42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 3));
    ctx->pc = 0x1a42ccu;
}
