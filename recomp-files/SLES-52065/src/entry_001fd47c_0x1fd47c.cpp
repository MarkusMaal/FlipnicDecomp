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

// Function: entry_001fd47c
// Address: 0x1fd47c - 0x1fd490
void entry_001fd47c_0x1fd47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd47c_0x1fd47c");
#endif

    ctx->pc = 0x1fd47cu;

    // 0x1fd47c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1fd47cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fd480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd484: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1fd484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1fd488: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FD488u;
    {
        const bool branch_taken_0x1fd488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD488u;
        // 0x1fd48c: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd488) {
            ctx->pc = 0x1FD4DCu;
            return;
        }
    }
    ctx->pc = 0x1FD490u;
}
