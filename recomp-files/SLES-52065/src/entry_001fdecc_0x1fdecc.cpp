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

// Function: entry_001fdecc
// Address: 0x1fdecc - 0x1fdf20
void entry_001fdecc_0x1fdecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdecc_0x1fdecc");
#endif

    switch (ctx->pc) {
        case 0x1fdf00u: goto label_1fdf00;
        default: break;
    }

    ctx->pc = 0x1fdeccu;

    // 0x1fdecc: 0x30c2081a  andi        $v0, $a2, 0x81A
    ctx->pc = 0x1fdeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2074);
    // 0x1fded0: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1FDED0u;
    {
        const bool branch_taken_0x1fded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDED0u;
        // 0x1fded4: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fded0) {
            ctx->pc = 0x1FE12Cu;
            return;
        }
    }
    ctx->pc = 0x1FDED8u;
    // 0x1fded8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FDED8u;
    {
        const bool branch_taken_0x1fded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDED8u;
        // 0x1fdedc: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fded8) {
            ctx->pc = 0x1FDF3Cu;
            return;
        }
    }
    ctx->pc = 0x1FDEE0u;
    // 0x1fdee0: 0x24421908  addiu       $v0, $v0, 0x1908
    ctx->pc = 0x1fdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6408));
    // 0x1fdee4: 0x16a2000f  bne         $s5, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FDEE4u;
    {
        const bool branch_taken_0x1fdee4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEE4u;
        // 0x1fdee8: 0x34c20800  ori         $v0, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdee4) {
            ctx->pc = 0x1FDF24u;
            return;
        }
    }
    ctx->pc = 0x1FDEECu;
    // 0x1fdeec: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1fdeecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1fdef0: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDEF0u;
    {
        const bool branch_taken_0x1fdef0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEF0u;
        // 0x1fdef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdef0) {
            ctx->pc = 0x1FDF24u;
            return;
        }
    }
    ctx->pc = 0x1FDEF8u;
    // 0x1fdef8: 0xc07f872  jal         func_1FE1C8
    ctx->pc = 0x1FDEF8u;
    SET_GPR_U32(ctx, 31, 0x1FDF00u);
    ctx->pc = 0x1FDEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEF8u;
    // 0x1fdefc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x1FDEF8u, 0x1FDF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF00u;
label_1fdf00:
    // 0x1fdf00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDF00u;
    {
        const bool branch_taken_0x1fdf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf00) {
            ctx->pc = 0x1FDF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF00u;
            // 0x1fdf04: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF20u;
            return;
        }
    }
    ctx->pc = 0x1FDF08u;
    // 0x1fdf08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fdf0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fdf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fdf10: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1fdf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1fdf14: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDF14u;
    {
        const bool branch_taken_0x1fdf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fdf14) {
            ctx->pc = 0x1FDF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF14u;
            // 0x1fdf18: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF2Cu;
            return;
        }
    }
    ctx->pc = 0x1FDF1Cu;
    // 0x1fdf1c: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x1fdf1cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1fdf20u;
}
