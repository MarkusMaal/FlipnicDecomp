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

// Function: entry_00173be4
// Address: 0x173be4 - 0x173c0c
void entry_00173be4_0x173be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173be4_0x173be4");
#endif

    ctx->pc = 0x173be4u;

    // 0x173be4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x173be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x173be8: 0x3c03c180  lui         $v1, 0xC180
    ctx->pc = 0x173be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
    // 0x173bec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x173becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x173bf0: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x173bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x173bf4: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x173bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
    // 0x173bf8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x173bf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173c00: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x173c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x173c04: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x173C04u;
    {
        const bool branch_taken_0x173c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C04u;
        // 0x173c08: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c04) {
            ctx->pc = 0x173E5Cu;
            return;
        }
    }
    ctx->pc = 0x173C0Cu;
}
