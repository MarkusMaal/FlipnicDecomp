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

// Function: entry_00143e84
// Address: 0x143e84 - 0x143eac
void entry_00143e84_0x143e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143e84_0x143e84");
#endif

    ctx->pc = 0x143e84u;

    // 0x143e84: 0x0  nop
    ctx->pc = 0x143e84u;
    // NOP
    // 0x143e88: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143e8c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x143e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x143e90: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x143e94: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x143e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143e98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143e9c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x143E9Cu;
    {
        const bool branch_taken_0x143e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E9Cu;
        // 0x143ea0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e9c) {
            ctx->pc = 0x143E3Cu;
            return;
        }
    }
    ctx->pc = 0x143EA4u;
    // 0x143ea4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x143EA4u;
    {
        const bool branch_taken_0x143ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ea4) {
            ctx->pc = 0x143F80u;
            return;
        }
    }
    ctx->pc = 0x143EACu;
}
