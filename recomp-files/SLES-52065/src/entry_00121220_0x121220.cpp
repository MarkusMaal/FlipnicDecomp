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

// Function: entry_00121220
// Address: 0x121220 - 0x121244
void entry_00121220_0x121220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121220_0x121220");
#endif

    ctx->pc = 0x121220u;

    // 0x121220: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x121220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x121224: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x121224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x121228: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x121228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x12122c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x12122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x121230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121230u;
    {
        const bool branch_taken_0x121230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121230) {
            ctx->pc = 0x121244u;
            return;
        }
    }
    ctx->pc = 0x121238u;
    // 0x121238: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x121238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x12123c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x121240: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x121240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x121244u;
}
