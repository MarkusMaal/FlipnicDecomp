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

// Function: entry_001fdb98
// Address: 0x1fdb98 - 0x1fdbb0
void entry_001fdb98_0x1fdb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdb98_0x1fdb98");
#endif

    ctx->pc = 0x1fdb98u;

    // 0x1fdb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fdb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdba0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fdba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdba8: 0x807fe9e  j           func_1FFA78
    ctx->pc = 0x1FDBA8u;
    ctx->pc = 0x1FDBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDBA8u;
    // 0x1fdbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    NullVoid_0x1ffa78(rdram, ctx, runtime); return;
    ctx->pc = 0x1FDBB0u;
}
