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

// Function: entry_00209de0
// Address: 0x209de0 - 0x209e08
void entry_00209de0_0x209de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209de0_0x209de0");
#endif

    ctx->pc = 0x209de0u;

    // 0x209de0: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x209de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x209de4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x209de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x209de8: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x209de8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x209dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209df0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x209df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209df4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209df8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e00: 0x807ac88  j           func_1EB220
    ctx->pc = 0x209E00u;
    ctx->pc = 0x209E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E00u;
    // 0x209e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB220u;
    SetGsCrt_0x1eb220(rdram, ctx, runtime); return;
    ctx->pc = 0x209E08u;
}
