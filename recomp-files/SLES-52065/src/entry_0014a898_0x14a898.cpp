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

// Function: entry_0014a898
// Address: 0x14a898 - 0x14a8fc
void entry_0014a898_0x14a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a898_0x14a898");
#endif

    ctx->pc = 0x14a898u;

    // 0x14a898: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x14a898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14a89c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x14a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x14a8a0: 0x27a706c0  addiu       $a3, $sp, 0x6C0
    ctx->pc = 0x14a8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    // 0x14a8a4: 0x27a30200  addiu       $v1, $sp, 0x200
    ctx->pc = 0x14a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14a8a8: 0x27a506a0  addiu       $a1, $sp, 0x6A0
    ctx->pc = 0x14a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
    // 0x14a8ac: 0xafa60200  sw          $a2, 0x200($sp)
    ctx->pc = 0x14a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 6));
    // 0x14a8b0: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x14a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14a8b4: 0xafa60204  sw          $a2, 0x204($sp)
    ctx->pc = 0x14a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 6));
    // 0x14a8b8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x14a8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14a8bc: 0xafa60208  sw          $a2, 0x208($sp)
    ctx->pc = 0x14a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 6));
    // 0x14a8c0: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x14a8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x14a8c4: 0xafa6020c  sw          $a2, 0x20C($sp)
    ctx->pc = 0x14a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 6));
    // 0x14a8c8: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x14a8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x14a8cc: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x14a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
    // 0x14a8d0: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x14a8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x14a8d4: 0xafa60214  sw          $a2, 0x214($sp)
    ctx->pc = 0x14a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 6));
    // 0x14a8d8: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x14a8d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a8dc: 0xdc840010  ld          $a0, 0x10($a0)
    ctx->pc = 0x14a8dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14a8e0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x14a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x14a8e4: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x14a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x14a8e8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x14a8e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a8ec: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a8ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a8f0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14a8f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A8F4u;
    {
        const bool branch_taken_0x14a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8F4u;
        // 0x14a8f8: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8f4) {
            ctx->pc = 0x14A968u;
            return;
        }
    }
    ctx->pc = 0x14A8FCu;
}
