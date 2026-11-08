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

// Function: entry_00120c34
// Address: 0x120c34 - 0x120c70
void entry_00120c34_0x120c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120c34_0x120c34");
#endif

    ctx->pc = 0x120c34u;

    // 0x120c34: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x120c34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x120c38: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x120c3c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x120C3Cu;
    {
        const bool branch_taken_0x120c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C3Cu;
        // 0x120c40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c3c) {
            ctx->pc = 0x120C98u;
            return;
        }
    }
    ctx->pc = 0x120C44u;
    // 0x120c44: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x120c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x120c48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x120c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120c4c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x120c50: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x120c54: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120c54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120c58: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x120C58u;
    {
        const bool branch_taken_0x120c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C58u;
        // 0x120c5c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c58) {
            ctx->pc = 0x120C70u;
            return;
        }
    }
    ctx->pc = 0x120C60u;
    // 0x120c60: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x120c64: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x120c64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x120c68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120C68u;
    {
        const bool branch_taken_0x120c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C68u;
        // 0x120c6c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c68) {
            ctx->pc = 0x120C84u;
            return;
        }
    }
    ctx->pc = 0x120C70u;
}
