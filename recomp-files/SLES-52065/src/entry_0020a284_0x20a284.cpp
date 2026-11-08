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

// Function: entry_0020a284
// Address: 0x20a284 - 0x20a300
void entry_0020a284_0x20a284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a284_0x20a284");
#endif

    ctx->pc = 0x20a284u;

    // 0x20a284: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20A284u;
    {
        const bool branch_taken_0x20a284 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A284u;
        // 0x20a288: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a284) {
            ctx->pc = 0x20A300u;
            return;
        }
    }
    ctx->pc = 0x20A28Cu;
    // 0x20a28c: 0x240202d0  addiu       $v0, $zero, 0x2D0
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x20a290: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20a290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a294: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20a294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20a298: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x20a29c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x20a2a0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20a2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a2a8: 0x64c700e8  daddiu      $a3, $a2, 0xE8
    ctx->pc = 0x20a2a8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)232);
    // 0x20a2ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20a2b0: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x20a2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20a2b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20a2b8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x20a2bc: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x20a2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x20a2c0: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x20a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20a2c4: 0xa7282d  daddu       $a1, $a1, $a3
    ctx->pc = 0x20a2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 7));
    // 0x20a2c8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x20a2cc: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x20a2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x20a2d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20a2d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20a2d4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x20a2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x20a2d8: 0x24840023  addiu       $a0, $a0, 0x23
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 35));
    // 0x20a2dc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x20a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x20a2e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x20a2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20a2e4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20a2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20a2e8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x20a2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x20a2ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20a2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20a2f0: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x20a2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x20a2f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20a2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A2F8u;
    {
        const bool branch_taken_0x20a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2F8u;
        // 0x20a2fc: 0xfe630018  sd          $v1, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2f8) {
            ctx->pc = 0x20A308u;
            return;
        }
    }
    ctx->pc = 0x20A300u;
}
