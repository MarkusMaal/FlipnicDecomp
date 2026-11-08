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

// Function: entry_00149c2c
// Address: 0x149c2c - 0x149d58
void entry_00149c2c_0x149c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149c2c_0x149c2c");
#endif

    switch (ctx->pc) {
        case 0x149c38u: goto label_149c38;
        case 0x149c44u: goto label_149c44;
        case 0x149c54u: goto label_149c54;
        case 0x149cc8u: goto label_149cc8;
        case 0x149cd4u: goto label_149cd4;
        case 0x149ce4u: goto label_149ce4;
        default: break;
    }

    ctx->pc = 0x149c2cu;

    // 0x149c2c: 0x27a40780  addiu       $a0, $sp, 0x780
    ctx->pc = 0x149c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
    // 0x149c30: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x149C30u;
    SET_GPR_U32(ctx, 31, 0x149C38u);
    ctx->pc = 0x149C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C30u;
    // 0x149c34: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x149C30u, 0x149C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C38u;
label_149c38:
    // 0x149c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c3c: 0xc051898  jal         func_146260
    ctx->pc = 0x149C3Cu;
    SET_GPR_U32(ctx, 31, 0x149C44u);
    ctx->pc = 0x149C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C3Cu;
    // 0x149c40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149C3Cu, 0x149C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C44u;
label_149c44:
    // 0x149c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149c48: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x149c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x149c4c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149C4Cu;
    SET_GPR_U32(ctx, 31, 0x149C54u);
    ctx->pc = 0x149C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C4Cu;
    // 0x149c50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149C4Cu, 0x149C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C54u;
label_149c54:
    // 0x149c54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149c58: 0x27a6024c  addiu       $a2, $sp, 0x24C
    ctx->pc = 0x149c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
    // 0x149c5c: 0x27a70250  addiu       $a3, $sp, 0x250
    ctx->pc = 0x149c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x149c60: 0x27a80254  addiu       $t0, $sp, 0x254
    ctx->pc = 0x149c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 596));
    // 0x149c64: 0x27be0104  addiu       $fp, $sp, 0x104
    ctx->pc = 0x149c64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x149c68: 0x27a407a0  addiu       $a0, $sp, 0x7A0
    ctx->pc = 0x149c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
    // 0x149c6c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x149c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x149c70: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x149c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x149c74: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149c78: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x149c78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x149c7c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149c80: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x149c80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x149c84: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x149c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x149c88: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x149c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x149c8c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x149c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x149c90: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x149c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x149c94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149c98: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x149c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x149c9c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x149c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x149ca0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149ca4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x149ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149ca8: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x149ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x149cac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149cb0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x149cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x149cb4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x149cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x149cb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149cbc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x149cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149cc0: 0xc052bf8  jal         func_14AFE0
    ctx->pc = 0x149CC0u;
    SET_GPR_U32(ctx, 31, 0x149CC8u);
    ctx->pc = 0x149CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CC0u;
    // 0x149cc4: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFE0u, 0x149CC0u, 0x149CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CC8u;
label_149cc8:
    // 0x149cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ccc: 0xc051898  jal         func_146260
    ctx->pc = 0x149CCCu;
    SET_GPR_U32(ctx, 31, 0x149CD4u);
    ctx->pc = 0x149CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CCCu;
    // 0x149cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x149CCCu, 0x149CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CD4u;
label_149cd4:
    // 0x149cd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x149cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149cd8: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x149cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x149cdc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x149CDCu;
    SET_GPR_U32(ctx, 31, 0x149CE4u);
    ctx->pc = 0x149CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149CDCu;
    // 0x149ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x149CDCu, 0x149CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CE4u;
label_149ce4:
    // 0x149ce4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x149ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x149ce8: 0x27a4026c  addiu       $a0, $sp, 0x26C
    ctx->pc = 0x149ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
    // 0x149cec: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x149cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x149cf0: 0x27a60274  addiu       $a2, $sp, 0x274
    ctx->pc = 0x149cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
    // 0x149cf4: 0x27b7011c  addiu       $s7, $sp, 0x11C
    ctx->pc = 0x149cf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x149cf8: 0x27b60120  addiu       $s6, $sp, 0x120
    ctx->pc = 0x149cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x149cfc: 0x27b20124  addiu       $s2, $sp, 0x124
    ctx->pc = 0x149cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x149d00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x149d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x149d04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149d08: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x149d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x149d0c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x149d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x149d10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x149d10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x149d14: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x149d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x149d18: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x149d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x149d1c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x149d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x149d20: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x149d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x149d24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149d28: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x149d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x149d2c: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x149d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x149d30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x149d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x149d34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x149d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x149d38: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x149d38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x149d3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149d40: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x149d40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x149d44: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x149d48: 0x16140003  bne         $s0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x149D48u;
    {
        const bool branch_taken_0x149d48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x149D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D48u;
        // 0x149d4c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d48) {
            ctx->pc = 0x149D58u;
            return;
        }
    }
    ctx->pc = 0x149D50u;
    // 0x149d50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x149D50u;
    {
        const bool branch_taken_0x149d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D50u;
        // 0x149d54: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d50) {
            ctx->pc = 0x149DC0u;
            return;
        }
    }
    ctx->pc = 0x149D58u;
}
