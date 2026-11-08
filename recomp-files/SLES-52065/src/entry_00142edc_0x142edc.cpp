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

// Function: entry_00142edc
// Address: 0x142edc - 0x142f04
void entry_00142edc_0x142edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142edc_0x142edc");
#endif

    ctx->pc = 0x142edcu;

    // 0x142edc: 0x0  nop
    ctx->pc = 0x142edcu;
    // NOP
    // 0x142ee0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142ee4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x142ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142ee8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142EE8u;
    {
        const bool branch_taken_0x142ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ee8) {
            ctx->pc = 0x142F04u;
            return;
        }
    }
    ctx->pc = 0x142EF0u;
    // 0x142ef0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x142ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142ef4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x142ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x142ef8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142efc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142f00: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x142f00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x142f04u;
}
