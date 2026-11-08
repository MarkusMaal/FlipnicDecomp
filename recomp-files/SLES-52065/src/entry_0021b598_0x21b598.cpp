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

// Function: entry_0021b598
// Address: 0x21b598 - 0x21b5e8
void entry_0021b598_0x21b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b598_0x21b598");
#endif

    ctx->pc = 0x21b598u;

    // 0x21b598: 0x25656740  addiu       $a1, $t3, 0x6740
    ctx->pc = 0x21b598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x21b59c: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x21b59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21b5a0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x21b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21b5a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21b5a8: 0x15a3004a  bne         $t5, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x21B5A8u;
    {
        const bool branch_taken_0x21b5a8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        ctx->pc = 0x21B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5A8u;
        // 0x21b5ac: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5a8) {
            ctx->pc = 0x21B6D4u;
            return;
        }
    }
    ctx->pc = 0x21B5B0u;
    // 0x21b5b0: 0x3c03b000  lui         $v1, 0xB000
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45056 << 16));
    // 0x21b5b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b5b8: 0x34631820  ori         $v1, $v1, 0x1820
    ctx->pc = 0x21b5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6176);
    // 0x21b5bc: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x21b5bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b5c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0xB0001820u));
    // 0x21b5c4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B5C4u;
    {
        const bool branch_taken_0x21b5c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5C4u;
        // 0x21b5c8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5c4) {
            ctx->pc = 0x21B5E8u;
            return;
        }
    }
    ctx->pc = 0x21B5CCu;
    // 0x21b5cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x21b5d0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x21b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x21b5d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F000u));
    // 0x21b5d8: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x21b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x21b5dc: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x21B5DCu;
    {
        const bool branch_taken_0x21b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5DCu;
        // 0x21b5e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5dc) {
            ctx->pc = 0x21B6ECu;
            return;
        }
    }
    ctx->pc = 0x21B5E4u;
    // 0x21b5e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x21b5e8u;
}
