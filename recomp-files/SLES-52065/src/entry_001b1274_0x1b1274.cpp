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

// Function: entry_001b1274
// Address: 0x1b1274 - 0x1b1298
void entry_001b1274_0x1b1274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1274_0x1b1274");
#endif

    ctx->pc = 0x1b1274u;

    // 0x1b1274: 0x0  nop
    ctx->pc = 0x1b1274u;
    // NOP
    // 0x1b1278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b127c: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x1b127cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b1280: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B1280u;
    {
        const bool branch_taken_0x1b1280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1280u;
        // 0x1b1284: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1280) {
            ctx->pc = 0x1B1250u;
            return;
        }
    }
    ctx->pc = 0x1B1288u;
    // 0x1b1288: 0x928302ec  lbu         $v1, 0x2EC($s4)
    ctx->pc = 0x1b1288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 748)));
    // 0x1b128c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B128Cu;
    {
        const bool branch_taken_0x1b128c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B128Cu;
        // 0x1b1290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b128c) {
            ctx->pc = 0x1B12C8u;
            return;
        }
    }
    ctx->pc = 0x1B1294u;
    // 0x1b1294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1298u;
}
