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

// Function: entry_001fc6b4
// Address: 0x1fc6b4 - 0x1fc728
void entry_001fc6b4_0x1fc6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc6b4_0x1fc6b4");
#endif

    switch (ctx->pc) {
        case 0x1fc6bcu: goto label_1fc6bc;
        case 0x1fc724u: goto label_1fc724;
        default: break;
    }

    ctx->pc = 0x1fc6b4u;

    // 0x1fc6b4: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FC6B4u;
    SET_GPR_U32(ctx, 31, 0x1FC6BCu);
    ctx->pc = 0x1FC6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC6B4u;
    // 0x1fc6b8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FC6B4u, 0x1FC6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC6BCu;
label_1fc6bc:
    // 0x1fc6bc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1fc6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1fc6c0: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x1fc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x1fc6c4: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x1FC6C4u;
    {
        const bool branch_taken_0x1fc6c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6C4u;
        // 0x1fc6c8: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6c4) {
            ctx->pc = 0x1FCAD0u;
            return;
        }
    }
    ctx->pc = 0x1FC6CCu;
    // 0x1fc6cc: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x1FC6CCu;
    {
        const bool branch_taken_0x1fc6cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6CCu;
        // 0x1fc6d0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6cc) {
            ctx->pc = 0x1FCAD0u;
            return;
        }
    }
    ctx->pc = 0x1FC6D4u;
    // 0x1fc6d4: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1fc6d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6d8: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x1fc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x1fc6dc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1fc6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc6e0: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FC6E0u;
    {
        const bool branch_taken_0x1fc6e0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1FC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6E0u;
        // 0x1fc6e4: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6e0) {
            ctx->pc = 0x1FC774u;
            return;
        }
    }
    ctx->pc = 0x1FC6E8u;
    // 0x1fc6e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc6ec: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x1fc6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x1fc6f0: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x1fc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x1fc6f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fc6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fc6f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc6fc: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x1fc700: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x1fc700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x1fc704: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC704u;
    {
        const bool branch_taken_0x1fc704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC704u;
        // 0x1fc708: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc704) {
            ctx->pc = 0x1FC728u;
            return;
        }
    }
    ctx->pc = 0x1FC70Cu;
    // 0x1fc70c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fc710: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc714: 0xdc455080  ld          $a1, 0x5080($v0)
    ctx->pc = 0x1fc714u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225080u));
    // 0x1fc718: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x1fc718u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1fc71c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FC71Cu;
    SET_GPR_U32(ctx, 31, 0x1FC724u);
    ctx->pc = 0x1FC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC71Cu;
    // 0x1fc720: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FC71Cu, 0x1FC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC724u;
label_1fc724:
    // 0x1fc724: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fc728u;
}
