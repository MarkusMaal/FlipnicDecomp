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

// Function: entry_00120bb4
// Address: 0x120bb4 - 0x120bec
void entry_00120bb4_0x120bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120bb4_0x120bb4");
#endif

    ctx->pc = 0x120bb4u;

    // 0x120bb4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x120bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x120bb8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x120BB8u;
    {
        const bool branch_taken_0x120bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BB8u;
        // 0x120bbc: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bb8) {
            ctx->pc = 0x120C18u;
            return;
        }
    }
    ctx->pc = 0x120BC0u;
    // 0x120bc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120bc4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x120bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x120bc8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x120bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x120bcc: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x120bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120bd0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x120BD0u;
    {
        const bool branch_taken_0x120bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x120bd0) {
            ctx->pc = 0x120BECu;
            return;
        }
    }
    ctx->pc = 0x120BD8u;
    // 0x120bd8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x120bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x120bdc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x120bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x120be0: 0xa0b30000  sb          $s3, 0x0($a1)
    ctx->pc = 0x120be0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x120be4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x120BE4u;
    {
        const bool branch_taken_0x120be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE4u;
        // 0x120be8: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120be4) {
            ctx->pc = 0x120C04u;
            return;
        }
    }
    ctx->pc = 0x120BECu;
}
