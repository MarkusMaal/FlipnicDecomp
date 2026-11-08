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

// Function: entry_00200dd4
// Address: 0x200dd4 - 0x200e08
void entry_00200dd4_0x200dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200dd4_0x200dd4");
#endif

    ctx->pc = 0x200dd4u;

    // 0x200dd4: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x200dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x200dd8: 0xb6182b  sltu        $v1, $a1, $s6
    ctx->pc = 0x200dd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200ddc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x200DDCu;
    {
        const bool branch_taken_0x200ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DDCu;
        // 0x200de0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ddc) {
            ctx->pc = 0x200E08u;
            return;
        }
    }
    ctx->pc = 0x200DE4u;
    // 0x200de4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x200de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x200de8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x200de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x200dec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x200decu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200df0: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x200df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x200df4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200df4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200df8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x200df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x200dfc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x200e00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x200E00u;
    {
        const bool branch_taken_0x200e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E00u;
        // 0x200e04: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e00) {
            ctx->pc = 0x200E30u;
            return;
        }
    }
    ctx->pc = 0x200E08u;
}
