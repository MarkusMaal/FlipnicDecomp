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

// Function: entry_001a4214
// Address: 0x1a4214 - 0x1a4258
void entry_001a4214_0x1a4214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4214_0x1a4214");
#endif

    ctx->pc = 0x1a4214u;

    // 0x1a4214: 0x0  nop
    ctx->pc = 0x1a4214u;
    // NOP
    // 0x1a4218: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
    // 0x1a421c: 0x82830024  lb          $v1, 0x24($s4)
    ctx->pc = 0x1a421cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1a4220: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a4224: 0xa04306f8  sb          $v1, 0x6F8($v0)
    ctx->pc = 0x1a4224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1784), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4228: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
    // 0x1a422c: 0x82830028  lb          $v1, 0x28($s4)
    ctx->pc = 0x1a422cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1a4230: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a4234: 0xa0430708  sb          $v1, 0x708($v0)
    ctx->pc = 0x1a4234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1800), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4238: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
    // 0x1a423c: 0x8283002c  lb          $v1, 0x2C($s4)
    ctx->pc = 0x1a423cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1a4240: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a4244: 0xa0430718  sb          $v1, 0x718($v0)
    ctx->pc = 0x1a4244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1816), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4248: 0x8e2206f4  lw          $v0, 0x6F4($s1)
    ctx->pc = 0x1a4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
    // 0x1a424c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4250: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A4250u;
    {
        const bool branch_taken_0x1a4250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4250u;
        // 0x1a4254: 0xae2206f4  sw          $v0, 0x6F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4250) {
            ctx->pc = 0x1A431Cu;
            return;
        }
    }
    ctx->pc = 0x1A4258u;
}
