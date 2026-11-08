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

// Function: entry_001a42cc
// Address: 0x1a42cc - 0x1a42f4
void entry_001a42cc_0x1a42cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a42cc_0x1a42cc");
#endif

    ctx->pc = 0x1a42ccu;

    // 0x1a42cc: 0x0  nop
    ctx->pc = 0x1a42ccu;
    // NOP
    // 0x1a42d0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1a42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1a42d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a42d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a42dc: 0xac40093c  sw          $zero, 0x93C($v0)
    ctx->pc = 0x1a42dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2364), GPR_U32(ctx, 0));
    // 0x1a42e0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1a42e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a42e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a42ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A42ECu;
    {
        const bool branch_taken_0x1a42ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42ECu;
        // 0x1a42f0: 0xac54097c  sw          $s4, 0x97C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2428), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42ec) {
            ctx->pc = 0x1A431Cu;
            return;
        }
    }
    ctx->pc = 0x1A42F4u;
}
