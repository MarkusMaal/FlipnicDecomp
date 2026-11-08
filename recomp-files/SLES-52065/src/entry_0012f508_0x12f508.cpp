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

// Function: entry_0012f508
// Address: 0x12f508 - 0x12f538
void entry_0012f508_0x12f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f508_0x12f508");
#endif

    ctx->pc = 0x12f508u;

    // 0x12f508: 0x2c71021  addu        $v0, $s6, $a3
    ctx->pc = 0x12f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x12f50c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x12f50cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f510: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12F510u;
    {
        const bool branch_taken_0x12f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F510u;
        // 0x12f514: 0x114840  sll         $t1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f510) {
            ctx->pc = 0x12F4B8u;
            return;
        }
    }
    ctx->pc = 0x12F518u;
    // 0x12f518: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x12f518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x12f51c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12f51cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12f520: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x12f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x12f524: 0x24621920  addiu       $v0, $v1, 0x1920
    ctx->pc = 0x12f524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
    // 0x12f528: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x12f528u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f52c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x12f52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f530: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x12F530u;
    {
        const bool branch_taken_0x12f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F530u;
        // 0x12f534: 0xa4620920  sh          $v0, 0x920($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f530) {
            ctx->pc = 0x12F5C8u;
            return;
        }
    }
    ctx->pc = 0x12F538u;
}
