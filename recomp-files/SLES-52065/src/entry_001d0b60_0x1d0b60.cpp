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

// Function: entry_001d0b60
// Address: 0x1d0b60 - 0x1d0ce4
void entry_001d0b60_0x1d0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0b60_0x1d0b60");
#endif

    switch (ctx->pc) {
        case 0x1d0b7cu: goto label_1d0b7c;
        case 0x1d0b8cu: goto label_1d0b8c;
        case 0x1d0ba0u: goto label_1d0ba0;
        case 0x1d0bb4u: goto label_1d0bb4;
        case 0x1d0bc8u: goto label_1d0bc8;
        case 0x1d0bdcu: goto label_1d0bdc;
        default: break;
    }

    ctx->pc = 0x1d0b60u;

label_1d0b60:
    // 0x1d0b60: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1d0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1d0b64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d0b68: 0x24429a20  addiu       $v0, $v0, -0x65E0
    ctx->pc = 0x1d0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941216));
    // 0x1d0b6c: 0x24740080  addiu       $s4, $v1, 0x80
    ctx->pc = 0x1d0b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1d0b70: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1d0b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d0b74: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1D0B74u;
    SET_GPR_U32(ctx, 31, 0x1D0B7Cu);
    ctx->pc = 0x1D0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B74u;
    // 0x1d0b78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1D0B74u, 0x1D0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B7Cu;
label_1d0b7c:
    // 0x1d0b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b84: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1D0B84u;
    SET_GPR_U32(ctx, 31, 0x1D0B8Cu);
    ctx->pc = 0x1D0B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B84u;
    // 0x1d0b88: 0x26660050  addiu       $a2, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1D0B84u, 0x1D0B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B8Cu;
label_1d0b8c:
    // 0x1d0b8c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d0b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d0b90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b98: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1D0B98u;
    SET_GPR_U32(ctx, 31, 0x1D0BA0u);
    ctx->pc = 0x1D0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B98u;
    // 0x1d0b9c: 0x24c69a10  addiu       $a2, $a2, -0x65F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1D0B98u, 0x1D0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BA0u;
label_1d0ba0:
    // 0x1d0ba0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d0ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d0ba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ba8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bac: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1D0BACu;
    SET_GPR_U32(ctx, 31, 0x1D0BB4u);
    ctx->pc = 0x1D0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BACu;
    // 0x1d0bb0: 0x24c69a00  addiu       $a2, $a2, -0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1D0BACu, 0x1D0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BB4u;
label_1d0bb4:
    // 0x1d0bb4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d0bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1d0bb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bc0: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1D0BC0u;
    SET_GPR_U32(ctx, 31, 0x1D0BC8u);
    ctx->pc = 0x1D0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BC0u;
    // 0x1d0bc4: 0x24c699f0  addiu       $a2, $a2, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1D0BC0u, 0x1D0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BC8u;
label_1d0bc8:
    // 0x1d0bc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bcc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1d0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1d0bd0: 0x245400a0  addiu       $s4, $v0, 0xA0
    ctx->pc = 0x1d0bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1d0bd4: 0xc07d39c  jal         func_1F4E70
    ctx->pc = 0x1D0BD4u;
    SET_GPR_U32(ctx, 31, 0x1D0BDCu);
    ctx->pc = 0x1D0BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BD4u;
    // 0x1d0bd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E70u, 0x1D0BD4u, 0x1D0BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BDCu;
label_1d0bdc:
    // 0x1d0bdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d0bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d0be0: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1d0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x1d0be4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d0be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d0be8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1D0BE8u;
    {
        const bool branch_taken_0x1d0be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BE8u;
        // 0x1d0bec: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0be8) {
            ctx->pc = 0x1D0B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b60;
        }
    }
    ctx->pc = 0x1D0BF0u;
    // 0x1d0bf0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0bf4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d0bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d0bf8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1d0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1d0bfc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d0bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d0c00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1d0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1d0c04: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x1d0c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x1d0c08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0c0c: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1d0c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d0c10: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1d0c10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0c14: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1d0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1d0c18: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x1d0c18u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d0c1c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1d0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1d0c20: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1d0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1d0c24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0c2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0c30: 0x7824fc40  lq          $a0, -0x3C0($at)
    ctx->pc = 0x1d0c30u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x36FC40u));
    // 0x1d0c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0c3c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0c40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0c48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0c4c: 0x7824fc60  lq          $a0, -0x3A0($at)
    ctx->pc = 0x1d0c4cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x36FC60u));
    // 0x1d0c50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c54: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d0c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d0c58: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0c5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0c64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0c68: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x1d0c68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0c6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0c74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c78: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0c7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0c80: 0x782499d0  lq          $a0, -0x6630($at)
    ctx->pc = 0x1d0c80u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x2199D0u));
    // 0x1d0c84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c88: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d0c8c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0c90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0c94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0c98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0c9c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1d0c9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d0ca0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0ca4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0ca8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0cac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0cb0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0cb4: 0x782499e0  lq          $a0, -0x6620($at)
    ctx->pc = 0x1d0cb4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x2199E0u));
    // 0x1d0cb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0cbc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0cc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0cc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0cc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d0ccc: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1d0cccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d0cd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0cd4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d0cd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0cdc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d0ce0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1d0ce4u;
}
