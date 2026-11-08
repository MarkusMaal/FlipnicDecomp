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

// Function: entry_001fd2ec
// Address: 0x1fd2ec - 0x1fd304
void entry_001fd2ec_0x1fd2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd2ec_0x1fd2ec");
#endif

    ctx->pc = 0x1fd2ecu;

    // 0x1fd2ec: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fd2ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fd2f0: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD2F0u;
    {
        const bool branch_taken_0x1fd2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2F0u;
        // 0x1fd2f4: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2f0) {
            ctx->pc = 0x1FD2E0u;
            return;
        }
    }
    ctx->pc = 0x1FD2F8u;
    // 0x1fd2f8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1fd2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fd2fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FD2FCu;
    {
        const bool branch_taken_0x1fd2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2FCu;
        // 0x1fd300: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2fc) {
            ctx->pc = 0x1FD33Cu;
            return;
        }
    }
    ctx->pc = 0x1FD304u;
}
