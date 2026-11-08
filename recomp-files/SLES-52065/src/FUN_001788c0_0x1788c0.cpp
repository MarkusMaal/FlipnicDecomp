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

// Function: FUN_001788c0
// Address: 0x1788c0 - 0x178a20
void FUN_001788c0_0x1788c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001788c0_0x1788c0");
#endif

    switch (ctx->pc) {
        case 0x1788e8u: goto label_1788e8;
        case 0x178900u: goto label_178900;
        case 0x178908u: goto label_178908;
        case 0x178910u: goto label_178910;
        case 0x178928u: goto label_178928;
        case 0x178948u: goto label_178948;
        case 0x178970u: goto label_178970;
        case 0x178978u: goto label_178978;
        case 0x178980u: goto label_178980;
        case 0x178998u: goto label_178998;
        case 0x1789a4u: goto label_1789a4;
        case 0x1789acu: goto label_1789ac;
        case 0x1789b4u: goto label_1789b4;
        case 0x1789ccu: goto label_1789cc;
        default: break;
    }

    ctx->pc = 0x1788c0u;

    // 0x1788c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1788c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1788c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1788c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1788c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1788c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1788cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1788ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1788d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1788d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1788d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1788d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788d8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1788d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1788dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1788dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1788E0u;
    {
        const bool branch_taken_0x1788e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788E0u;
        // 0x1788e4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788e0) {
            ctx->pc = 0x178930u;
            goto label_178930;
        }
    }
    ctx->pc = 0x1788E8u;
label_1788e8:
    // 0x1788e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1788ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1788ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1788f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1788f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1788f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1788f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1788f8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1788F8u;
    SET_GPR_U32(ctx, 31, 0x178900u);
    ctx->pc = 0x1788FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788F8u;
    // 0x1788fc: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1788F8u, 0x178900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178900u;
label_178900:
    // 0x178900: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178900u;
    SET_GPR_U32(ctx, 31, 0x178908u);
    ctx->pc = 0x178904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178900u;
    // 0x178904: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178900u, 0x178908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178908u;
label_178908:
    // 0x178908: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178908u;
    SET_GPR_U32(ctx, 31, 0x178910u);
    ctx->pc = 0x17890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178908u;
    // 0x17890c: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178908u, 0x178910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178910u;
label_178910:
    // 0x178910: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x178914: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178918: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x178918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x17891c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178920: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178920u;
    SET_GPR_U32(ctx, 31, 0x178928u);
    ctx->pc = 0x178924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178920u;
    // 0x178924: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178920u, 0x178928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178928u;
label_178928:
    // 0x178928: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x178928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x17892c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17892cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_178930:
    // 0x178930: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178934: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x178934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178938: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x178938u;
    {
        const bool branch_taken_0x178938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178938u;
        // 0x17893c: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178938) {
            ctx->pc = 0x1788E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1788e8;
        }
    }
    ctx->pc = 0x178940u;
    // 0x178940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178940u;
    {
        const bool branch_taken_0x178940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178940u;
        // 0x178944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178940) {
            ctx->pc = 0x178958u;
            goto label_178958;
        }
    }
    ctx->pc = 0x178948u;
label_178948:
    // 0x178948: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x178948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17894c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x178950: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x178950u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178954: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x178954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_178958:
    // 0x178958: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x178958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17895c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17895Cu;
    {
        const bool branch_taken_0x17895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17895Cu;
        // 0x178960: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17895c) {
            ctx->pc = 0x178948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178948;
        }
    }
    ctx->pc = 0x178964u;
    // 0x178964: 0x26220420  addiu       $v0, $s1, 0x420
    ctx->pc = 0x178964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x178968: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178968u;
    SET_GPR_U32(ctx, 31, 0x178970u);
    ctx->pc = 0x17896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178968u;
    // 0x17896c: 0xf8400000  sqc2        $vf0, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178968u, 0x178970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178970u;
label_178970:
    // 0x178970: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178970u;
    SET_GPR_U32(ctx, 31, 0x178978u);
    ctx->pc = 0x178974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178970u;
    // 0x178974: 0xe6200430  swc1        $f0, 0x430($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178970u, 0x178978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178978u;
label_178978:
    // 0x178978: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178978u;
    SET_GPR_U32(ctx, 31, 0x178980u);
    ctx->pc = 0x17897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178978u;
    // 0x17897c: 0xe6200434  swc1        $f0, 0x434($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178978u, 0x178980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178980u;
label_178980:
    // 0x178980: 0x26240430  addiu       $a0, $s1, 0x430
    ctx->pc = 0x178980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    // 0x178984: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178988: 0xe6200438  swc1        $f0, 0x438($s1)
    ctx->pc = 0x178988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1080), bits); }
    // 0x17898c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178990: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178990u;
    SET_GPR_U32(ctx, 31, 0x178998u);
    ctx->pc = 0x178994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178990u;
    // 0x178994: 0xae22043c  sw          $v0, 0x43C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178990u, 0x178998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178998u;
label_178998:
    // 0x178998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17899c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17899Cu;
    SET_GPR_U32(ctx, 31, 0x1789A4u);
    ctx->pc = 0x1789A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17899Cu;
    // 0x1789a0: 0xae22043c  sw          $v0, 0x43C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17899Cu, 0x1789A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789A4u;
label_1789a4:
    // 0x1789a4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1789A4u;
    SET_GPR_U32(ctx, 31, 0x1789ACu);
    ctx->pc = 0x1789A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789A4u;
    // 0x1789a8: 0xe6200440  swc1        $f0, 0x440($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1088), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1789A4u, 0x1789ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789ACu;
label_1789ac:
    // 0x1789ac: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1789ACu;
    SET_GPR_U32(ctx, 31, 0x1789B4u);
    ctx->pc = 0x1789B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789ACu;
    // 0x1789b0: 0xe6200444  swc1        $f0, 0x444($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1789ACu, 0x1789B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789B4u;
label_1789b4:
    // 0x1789b4: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x1789b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x1789b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1789b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1789bc: 0xe6200448  swc1        $f0, 0x448($s1)
    ctx->pc = 0x1789bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1096), bits); }
    // 0x1789c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1789c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789c4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1789C4u;
    SET_GPR_U32(ctx, 31, 0x1789CCu);
    ctx->pc = 0x1789C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789C4u;
    // 0x1789c8: 0xae22044c  sw          $v0, 0x44C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1789C4u, 0x1789CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789CCu;
label_1789cc:
    // 0x1789cc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1789ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1789d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1789d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1789d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1789d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1789d8: 0x3c0341c9  lui         $v1, 0x41C9
    ctx->pc = 0x1789d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16841 << 16));
    // 0x1789dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1789dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1789e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1789e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1789e4: 0x0  nop
    ctx->pc = 0x1789e4u;
    // NOP
    // 0x1789e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1789e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1789ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1789ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1789f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1789f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1789f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1789f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1789f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1789f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1789fc: 0xe620044c  swc1        $f0, 0x44C($s1)
    ctx->pc = 0x1789fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1100), bits); }
    // 0x178a00: 0xae200450  sw          $zero, 0x450($s1)
    ctx->pc = 0x178a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 0));
    // 0x178a04: 0xae200454  sw          $zero, 0x454($s1)
    ctx->pc = 0x178a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 0));
    // 0x178a08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a18: 0x3e00008  jr          $ra
    ctx->pc = 0x178A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A18u;
        // 0x178a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178A20u;
}
