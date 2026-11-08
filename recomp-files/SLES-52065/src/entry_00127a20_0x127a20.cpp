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

// Function: entry_00127a20
// Address: 0x127a20 - 0x127a34
void entry_00127a20_0x127a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127a20_0x127a20");
#endif

    ctx->pc = 0x127a20u;

    // 0x127a20: 0x274b021  addu        $s6, $s3, $s4
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x127a24: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x127a24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x127a28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127a2c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x127A2Cu;
    {
        const bool branch_taken_0x127a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127a2c) {
            ctx->pc = 0x127A00u;
            return;
        }
    }
    ctx->pc = 0x127A34u;
}
