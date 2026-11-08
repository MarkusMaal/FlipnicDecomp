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

// Function: entry_0020b118
// Address: 0x20b118 - 0x20b19c
void entry_0020b118_0x20b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b118_0x20b118");
#endif

    switch (ctx->pc) {
        case 0x20b13cu: goto label_20b13c;
        default: break;
    }

    ctx->pc = 0x20b118u;

label_20b118:
    // 0x20b118: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20b11c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x20b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x20b120: 0x0  nop
    ctx->pc = 0x20b120u;
    // NOP
    // 0x20b124: 0x0  nop
    ctx->pc = 0x20b124u;
    // NOP
    // 0x20b128: 0x0  nop
    ctx->pc = 0x20b128u;
    // NOP
    // 0x20b12c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B12Cu;
    {
        const bool branch_taken_0x20b12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b12c) {
            ctx->pc = 0x20B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b118;
        }
    }
    ctx->pc = 0x20B134u;
    // 0x20b134: 0xc082bf2  jal         func_20AFC8
    ctx->pc = 0x20B134u;
    SET_GPR_U32(ctx, 31, 0x20B13Cu);
    ctx->pc = 0x20B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B134u;
    // 0x20b138: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AFC8u, 0x20B134u, 0x20B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B13Cu;
label_20b13c:
    // 0x20b13c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b140: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x20b144: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x20b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x20b148: 0x34e7b020  ori         $a3, $a3, 0xB020
    ctx->pc = 0x20b148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45088);
    // 0x20b14c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x20b150: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x20b154: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x20b154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x20b158: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x20b15c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x20b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x20b160: 0x34c62020  ori         $a2, $a2, 0x2020
    ctx->pc = 0x20b160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8224);
    // 0x20b164: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b16c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x20b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x20b170: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x20b174: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x20b174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x20b178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x20b17c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x20b17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x20b180: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20b180u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x20b184: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x20b184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x20b188: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b188u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x20b18c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x20b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x20b190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b194: 0x3e00008  jr          $ra
    ctx->pc = 0x20B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B194u;
        // 0x20b198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B19Cu;
}
