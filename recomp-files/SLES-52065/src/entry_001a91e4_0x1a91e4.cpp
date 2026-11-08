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

// Function: entry_001a91e4
// Address: 0x1a91e4 - 0x1a920c
void entry_001a91e4_0x1a91e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a91e4_0x1a91e4");
#endif

    ctx->pc = 0x1a91e4u;

    // 0x1a91e4: 0x0  nop
    ctx->pc = 0x1a91e4u;
    // NOP
    // 0x1a91e8: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a91ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a91f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a91f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a91f4: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x1A91F4u;
    {
        const bool branch_taken_0x1a91f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A91F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91F4u;
        // 0x1a91f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91f4) {
            ctx->pc = 0x1A8F64u;
            return;
        }
    }
    ctx->pc = 0x1A91FCu;
    // 0x1a91fc: 0x8e8209c8  lw          $v0, 0x9C8($s4)
    ctx->pc = 0x1a91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2504)));
    // 0x1a9200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9204: 0xae8209c8  sw          $v0, 0x9C8($s4)
    ctx->pc = 0x1a9204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2504), GPR_U32(ctx, 2));
    // 0x1a9208: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1a920cu;
}
