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

// Function: entry_00198264
// Address: 0x198264 - 0x1982a8
void entry_00198264_0x198264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198264_0x198264");
#endif

    ctx->pc = 0x198264u;

    // 0x198264: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x198264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x198268: 0x8c7306bc  lw          $s3, 0x6BC($v1)
    ctx->pc = 0x198268u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1724)));
    // 0x19826c: 0x2472067c  addiu       $s2, $v1, 0x67C
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1660));
    // 0x198270: 0x8c65067c  lw          $a1, 0x67C($v1)
    ctx->pc = 0x198270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
    // 0x198274: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x198278: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x198278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x19827c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198280: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x198280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x198284: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x198284u;
    {
        const bool branch_taken_0x198284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x198288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198284u;
        // 0x198288: 0x8cd00004  lw          $s0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198284) {
            ctx->pc = 0x19830Cu;
            return;
        }
    }
    ctx->pc = 0x19828Cu;
    // 0x19828c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198290: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x198290u;
    {
        const bool branch_taken_0x198290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x198290) {
            ctx->pc = 0x1982A8u;
            return;
        }
    }
    ctx->pc = 0x198298u;
    // 0x198298: 0x10a00061  beqz        $a1, . + 4 + (0x61 << 2)
    ctx->pc = 0x198298u;
    {
        const bool branch_taken_0x198298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x198298) {
            ctx->pc = 0x198420u;
            return;
        }
    }
    ctx->pc = 0x1982A0u;
    // 0x1982a0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1982A0u;
    {
        const bool branch_taken_0x1982a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982a0) {
            ctx->pc = 0x198420u;
            return;
        }
    }
    ctx->pc = 0x1982A8u;
}
