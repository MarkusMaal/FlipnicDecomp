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

// Function: entry_002082f8
// Address: 0x2082f8 - 0x208318
void entry_002082f8_0x2082f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002082f8_0x2082f8");
#endif

    ctx->pc = 0x2082f8u;

    // 0x2082f8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2082f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2082fc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2082FCu;
    {
        const bool branch_taken_0x2082fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2082fc) {
            ctx->pc = 0x208300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2082FCu;
            // 0x208300: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208320u;
            return;
        }
    }
    ctx->pc = 0x208304u;
    // 0x208304: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x208304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x208308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208308u;
    {
        const bool branch_taken_0x208308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208308u;
        // 0x20830c: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208308) {
            ctx->pc = 0x208318u;
            return;
        }
    }
    ctx->pc = 0x208310u;
    // 0x208310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208310u;
    {
        const bool branch_taken_0x208310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208310u;
        // 0x208314: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208310) {
            ctx->pc = 0x20831Cu;
            return;
        }
    }
    ctx->pc = 0x208318u;
}
