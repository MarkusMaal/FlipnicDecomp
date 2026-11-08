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

// Function: entry_001d9bbc
// Address: 0x1d9bbc - 0x1d9bf0
void entry_001d9bbc_0x1d9bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9bbc_0x1d9bbc");
#endif

    ctx->pc = 0x1d9bbcu;

    // 0x1d9bbc: 0x26b50050  addiu       $s5, $s5, 0x50
    ctx->pc = 0x1d9bbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1d9bc0: 0x641ffaf  bgez        $s2, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1D9BC0u;
    {
        const bool branch_taken_0x1d9bc0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1D9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BC0u;
        // 0x1d9bc4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bc0) {
            ctx->pc = 0x1D9A80u;
            return;
        }
    }
    ctx->pc = 0x1D9BC8u;
    // 0x1d9bc8: 0x8ec272e0  lw          $v0, 0x72E0($s6)
    ctx->pc = 0x1d9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29408)));
    // 0x1d9bcc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D9BCCu;
    {
        const bool branch_taken_0x1d9bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9bcc) {
            ctx->pc = 0x1D9BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BCCu;
            // 0x1d9bd0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9C2Cu;
            return;
        }
    }
    ctx->pc = 0x1D9BD4u;
    // 0x1d9bd4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D9BD4u;
    {
        const bool branch_taken_0x1d9bd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BD4u;
        // 0x1d9bd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bd4) {
            ctx->pc = 0x1D9C24u;
            return;
        }
    }
    ctx->pc = 0x1D9BDCu;
    // 0x1d9bdc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d9be0: 0x245271e0  addiu       $s2, $v0, 0x71E0
    ctx->pc = 0x1d9be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 29152));
    // 0x1d9be4: 0x26530002  addiu       $s3, $s2, 0x2
    ctx->pc = 0x1d9be4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d9be8: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x1d9be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9bec: 0x0  nop
    ctx->pc = 0x1d9becu;
    // NOP
    ctx->pc = 0x1d9bf0u;
}
