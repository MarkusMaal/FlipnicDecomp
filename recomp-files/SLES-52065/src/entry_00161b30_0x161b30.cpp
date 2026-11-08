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

// Function: entry_00161b30
// Address: 0x161b30 - 0x161b70
void entry_00161b30_0x161b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b30_0x161b30");
#endif

    ctx->pc = 0x161b30u;

    // 0x161b30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x161b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161b34: 0x14c30014  bne         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x161B34u;
    {
        const bool branch_taken_0x161b34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x161B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B34u;
        // 0x161b38: 0x28c1fffe  slti        $at, $a2, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b34) {
            ctx->pc = 0x161B88u;
            return;
        }
    }
    ctx->pc = 0x161B3Cu;
    // 0x161b3c: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x161b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x161b40: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x161B40u;
    {
        const bool branch_taken_0x161b40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B40u;
        // 0x161b44: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b40) {
            ctx->pc = 0x161B84u;
            return;
        }
    }
    ctx->pc = 0x161B48u;
    // 0x161b48: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x161B48u;
    {
        const bool branch_taken_0x161b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x161b48) {
            ctx->pc = 0x161B84u;
            return;
        }
    }
    ctx->pc = 0x161B50u;
    // 0x161b50: 0x8203021c  lb          $v1, 0x21C($s0)
    ctx->pc = 0x161b50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x161b54: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x161B54u;
    {
        const bool branch_taken_0x161b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161b54) {
            ctx->pc = 0x161B84u;
            return;
        }
    }
    ctx->pc = 0x161B5Cu;
    // 0x161b5c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x161B5Cu;
    {
        const bool branch_taken_0x161b5c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x161b5c) {
            ctx->pc = 0x161B70u;
            return;
        }
    }
    ctx->pc = 0x161B64u;
    // 0x161b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161B68u;
    {
        const bool branch_taken_0x161b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B68u;
        // 0x161b6c: 0xa203021c  sb          $v1, 0x21C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b68) {
            ctx->pc = 0x161B78u;
            return;
        }
    }
    ctx->pc = 0x161B70u;
}
