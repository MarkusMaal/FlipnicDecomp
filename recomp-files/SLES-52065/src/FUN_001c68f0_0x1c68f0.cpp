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

// Function: FUN_001c68f0
// Address: 0x1c68f0 - 0x1c77a8
void FUN_001c68f0_0x1c68f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c68f0_0x1c68f0");
#endif

    switch (ctx->pc) {
        case 0x1c6908u: goto label_1c6908;
        case 0x1c6948u: goto label_1c6948;
        case 0x1c6968u: goto label_1c6968;
        case 0x1c6990u: goto label_1c6990;
        case 0x1c69a8u: goto label_1c69a8;
        case 0x1c69c0u: goto label_1c69c0;
        case 0x1c69ccu: goto label_1c69cc;
        case 0x1c69d8u: goto label_1c69d8;
        case 0x1c69fcu: goto label_1c69fc;
        case 0x1c6a18u: goto label_1c6a18;
        case 0x1c6a20u: goto label_1c6a20;
        case 0x1c6a30u: goto label_1c6a30;
        case 0x1c6a38u: goto label_1c6a38;
        case 0x1c6a44u: goto label_1c6a44;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a74u: goto label_1c6a74;
        case 0x1c6a98u: goto label_1c6a98;
        case 0x1c6aa8u: goto label_1c6aa8;
        case 0x1c6ad8u: goto label_1c6ad8;
        case 0x1c6af4u: goto label_1c6af4;
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b18u: goto label_1c6b18;
        case 0x1c6b8cu: goto label_1c6b8c;
        case 0x1c6b9cu: goto label_1c6b9c;
        case 0x1c6bacu: goto label_1c6bac;
        case 0x1c6bb8u: goto label_1c6bb8;
        case 0x1c6bc8u: goto label_1c6bc8;
        case 0x1c6bd4u: goto label_1c6bd4;
        case 0x1c6be4u: goto label_1c6be4;
        case 0x1c6bf0u: goto label_1c6bf0;
        case 0x1c6c00u: goto label_1c6c00;
        case 0x1c6c10u: goto label_1c6c10;
        case 0x1c6c1cu: goto label_1c6c1c;
        case 0x1c6c2cu: goto label_1c6c2c;
        case 0x1c6c50u: goto label_1c6c50;
        case 0x1c6c6cu: goto label_1c6c6c;
        case 0x1c6c74u: goto label_1c6c74;
        case 0x1c6c84u: goto label_1c6c84;
        case 0x1c6c8cu: goto label_1c6c8c;
        case 0x1c6c98u: goto label_1c6c98;
        case 0x1c6ca4u: goto label_1c6ca4;
        case 0x1c6cbcu: goto label_1c6cbc;
        case 0x1c6d3cu: goto label_1c6d3c;
        case 0x1c6e04u: goto label_1c6e04;
        case 0x1c6e10u: goto label_1c6e10;
        case 0x1c6e1cu: goto label_1c6e1c;
        case 0x1c6e24u: goto label_1c6e24;
        case 0x1c6e3cu: goto label_1c6e3c;
        case 0x1c6e48u: goto label_1c6e48;
        case 0x1c6e54u: goto label_1c6e54;
        case 0x1c6e5cu: goto label_1c6e5c;
        case 0x1c6e7cu: goto label_1c6e7c;
        case 0x1c6e88u: goto label_1c6e88;
        case 0x1c6e94u: goto label_1c6e94;
        case 0x1c6eb0u: goto label_1c6eb0;
        case 0x1c6ec4u: goto label_1c6ec4;
        case 0x1c6ed0u: goto label_1c6ed0;
        case 0x1c6edcu: goto label_1c6edc;
        case 0x1c6ef4u: goto label_1c6ef4;
        case 0x1c6f04u: goto label_1c6f04;
        case 0x1c6f18u: goto label_1c6f18;
        case 0x1c6f3cu: goto label_1c6f3c;
        case 0x1c6facu: goto label_1c6fac;
        case 0x1c6fb8u: goto label_1c6fb8;
        case 0x1c6fc4u: goto label_1c6fc4;
        case 0x1c6fccu: goto label_1c6fcc;
        case 0x1c6fe4u: goto label_1c6fe4;
        case 0x1c6ff0u: goto label_1c6ff0;
        case 0x1c6ffcu: goto label_1c6ffc;
        case 0x1c701cu: goto label_1c701c;
        case 0x1c7040u: goto label_1c7040;
        case 0x1c704cu: goto label_1c704c;
        case 0x1c7084u: goto label_1c7084;
        case 0x1c7090u: goto label_1c7090;
        case 0x1c709cu: goto label_1c709c;
        case 0x1c70acu: goto label_1c70ac;
        case 0x1c70c4u: goto label_1c70c4;
        case 0x1c70d0u: goto label_1c70d0;
        case 0x1c70dcu: goto label_1c70dc;
        case 0x1c7108u: goto label_1c7108;
        case 0x1c710cu: goto label_1c710c;
        case 0x1c7130u: goto label_1c7130;
        case 0x1c713cu: goto label_1c713c;
        case 0x1c7148u: goto label_1c7148;
        case 0x1c7158u: goto label_1c7158;
        case 0x1c7170u: goto label_1c7170;
        case 0x1c717cu: goto label_1c717c;
        case 0x1c7188u: goto label_1c7188;
        case 0x1c71b4u: goto label_1c71b4;
        case 0x1c71b8u: goto label_1c71b8;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c7224u: goto label_1c7224;
        case 0x1c7234u: goto label_1c7234;
        case 0x1c724cu: goto label_1c724c;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c7264u: goto label_1c7264;
        case 0x1c7290u: goto label_1c7290;
        case 0x1c7294u: goto label_1c7294;
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72f4u: goto label_1c72f4;
        case 0x1c7300u: goto label_1c7300;
        case 0x1c7310u: goto label_1c7310;
        case 0x1c7328u: goto label_1c7328;
        case 0x1c7334u: goto label_1c7334;
        case 0x1c7340u: goto label_1c7340;
        case 0x1c736cu: goto label_1c736c;
        case 0x1c7370u: goto label_1c7370;
        case 0x1c73c4u: goto label_1c73c4;
        case 0x1c73d0u: goto label_1c73d0;
        case 0x1c73dcu: goto label_1c73dc;
        case 0x1c73ecu: goto label_1c73ec;
        case 0x1c7404u: goto label_1c7404;
        case 0x1c7410u: goto label_1c7410;
        case 0x1c741cu: goto label_1c741c;
        case 0x1c7448u: goto label_1c7448;
        case 0x1c744cu: goto label_1c744c;
        case 0x1c74a0u: goto label_1c74a0;
        case 0x1c74acu: goto label_1c74ac;
        case 0x1c74b8u: goto label_1c74b8;
        case 0x1c74d4u: goto label_1c74d4;
        case 0x1c74e0u: goto label_1c74e0;
        case 0x1c74f8u: goto label_1c74f8;
        case 0x1c7504u: goto label_1c7504;
        case 0x1c7510u: goto label_1c7510;
        case 0x1c7524u: goto label_1c7524;
        case 0x1c7548u: goto label_1c7548;
        case 0x1c7554u: goto label_1c7554;
        case 0x1c7560u: goto label_1c7560;
        case 0x1c757cu: goto label_1c757c;
        case 0x1c7588u: goto label_1c7588;
        case 0x1c75a0u: goto label_1c75a0;
        case 0x1c75acu: goto label_1c75ac;
        case 0x1c75b8u: goto label_1c75b8;
        case 0x1c75ccu: goto label_1c75cc;
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c75fcu: goto label_1c75fc;
        case 0x1c7608u: goto label_1c7608;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c7648u: goto label_1c7648;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c7714u: goto label_1c7714;
        case 0x1c772cu: goto label_1c772c;
        case 0x1c7738u: goto label_1c7738;
        case 0x1c7744u: goto label_1c7744;
        case 0x1c7758u: goto label_1c7758;
        case 0x1c7784u: goto label_1c7784;
        case 0x1c7790u: goto label_1c7790;
        case 0x1c7798u: goto label_1c7798;
        default: break;
    }

    ctx->pc = 0x1c68f0u;

    // 0x1c68f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c68f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c68f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c68f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c68f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c68fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c68fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6900: 0xc06dd9c  jal         func_1B7670
    ctx->pc = 0x1C6900u;
    SET_GPR_U32(ctx, 31, 0x1C6908u);
    ctx->pc = 0x1C6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6900u;
    // 0x1c6904: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7670u, 0x1C6900u, 0x1C6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6908u;
label_1c6908:
    // 0x1c6908: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c6908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c690c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1c690cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1c6910: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6914: 0x2c41002a  sltiu       $at, $v0, 0x2A
    ctx->pc = 0x1c6914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x1c6918: 0x1020039b  beqz        $at, . + 4 + (0x39B << 2)
    ctx->pc = 0x1C6918u;
    {
        const bool branch_taken_0x1c6918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6918u;
        // 0x1c691c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6918) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C6920u;
    // 0x1c6920: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c6920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c6924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c6924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c6928: 0x24632130  addiu       $v1, $v1, 0x2130
    ctx->pc = 0x1c6928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8496));
    // 0x1c692c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6934: 0x400008  jr          $v0
    ctx->pc = 0x1C6934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C693Cu: goto label_1c693c;
            case 0x1C6AB4u: goto label_1c6ab4;
            case 0x1C6DF8u: goto label_1c6df8;
            case 0x1C6E30u: goto label_1c6e30;
            case 0x1C6E70u: goto label_1c6e70;
            case 0x1C6EB8u: goto label_1c6eb8;
            case 0x1C6EFCu: goto label_1c6efc;
            case 0x1C6F10u: goto label_1c6f10;
            case 0x1C6FA0u: goto label_1c6fa0;
            case 0x1C6FD8u: goto label_1c6fd8;
            case 0x1C7034u: goto label_1c7034;
            case 0x1C7078u: goto label_1c7078;
            case 0x1C70B8u: goto label_1c70b8;
            case 0x1C7124u: goto label_1c7124;
            case 0x1C7164u: goto label_1c7164;
            case 0x1C7200u: goto label_1c7200;
            case 0x1C7240u: goto label_1c7240;
            case 0x1C72DCu: goto label_1c72dc;
            case 0x1C731Cu: goto label_1c731c;
            case 0x1C73B8u: goto label_1c73b8;
            case 0x1C73F8u: goto label_1c73f8;
            case 0x1C7494u: goto label_1c7494;
            case 0x1C74ECu: goto label_1c74ec;
            case 0x1C753Cu: goto label_1c753c;
            case 0x1C7594u: goto label_1c7594;
            case 0x1C75E4u: goto label_1c75e4;
            case 0x1C762Cu: goto label_1c762c;
            case 0x1C7640u: goto label_1c7640;
            case 0x1C76C0u: goto label_1c76c0;
            case 0x1C7720u: goto label_1c7720;
            case 0x1C7770u: goto label_1c7770;
            case 0x1C7784u: goto label_1c7784;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C693Cu;
label_1c693c:
    // 0x1c693c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6940: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6940u;
    SET_GPR_U32(ctx, 31, 0x1C6948u);
    ctx->pc = 0x1C6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6940u;
    // 0x1c6944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6940u, 0x1C6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6948u;
label_1c6948:
    // 0x1c6948: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c694c: 0x8022f898  lb          $v0, -0x768($at)
    ctx->pc = 0x1c694cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F898u));
    // 0x1c6950: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6950u;
    {
        const bool branch_taken_0x1c6950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6950u;
        // 0x1c6954: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6950) {
            ctx->pc = 0x1C6968u;
            goto label_1c6968;
        }
    }
    ctx->pc = 0x1C6958u;
    // 0x1c6958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c695c: 0xa020f890  sb          $zero, -0x770($at)
    ctx->pc = 0x1c695cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294965392), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6960: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6964: 0xa022f898  sb          $v0, -0x768($at)
    ctx->pc = 0x1c6964u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F898u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F898u, _value); } while (0);
label_1c6968:
    // 0x1c6968: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c696c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c6970: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6970u;
    {
        const bool branch_taken_0x1c6970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6970u;
        // 0x1c6974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6970) {
            ctx->pc = 0x1C69B8u;
            goto label_1c69b8;
        }
    }
    ctx->pc = 0x1C6978u;
    // 0x1c6978: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6978u;
    {
        const bool branch_taken_0x1c6978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6978u;
        // 0x1c697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6978) {
            ctx->pc = 0x1C6988u;
            goto label_1c6988;
        }
    }
    ctx->pc = 0x1C6980u;
    // 0x1c6980: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6980u;
    {
        const bool branch_taken_0x1c6980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6980u;
        // 0x1c6984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6980) {
            ctx->pc = 0x1C69D0u;
            goto label_1c69d0;
        }
    }
    ctx->pc = 0x1C6988u;
label_1c6988:
    // 0x1c6988: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6988u;
    SET_GPR_U32(ctx, 31, 0x1C6990u);
    ctx->pc = 0x1C698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6988u;
    // 0x1c698c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6988u, 0x1C6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6990u;
label_1c6990:
    // 0x1c6990: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6994: 0x9022f890  lbu         $v0, -0x770($at)
    ctx->pc = 0x1c6994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F890u));
    // 0x1c6998: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6998u;
    {
        const bool branch_taken_0x1c6998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6998u;
        // 0x1c699c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6998) {
            ctx->pc = 0x1C69CCu;
            goto label_1c69cc;
        }
    }
    ctx->pc = 0x1C69A0u;
    // 0x1c69a0: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C69A0u;
    SET_GPR_U32(ctx, 31, 0x1C69A8u);
    ctx->pc = 0x1C69A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69A0u;
    // 0x1c69a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C69A0u, 0x1C69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69A8u;
label_1c69a8:
    // 0x1c69a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c69ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c69b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C69B0u;
    {
        const bool branch_taken_0x1c69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69B0u;
        // 0x1c69b4: 0xa022f890  sb          $v0, -0x770($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965392), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69b0) {
            ctx->pc = 0x1C69CCu;
            goto label_1c69cc;
        }
    }
    ctx->pc = 0x1C69B8u;
label_1c69b8:
    // 0x1c69b8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C69B8u;
    SET_GPR_U32(ctx, 31, 0x1C69C0u);
    ctx->pc = 0x1C69BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69B8u;
    // 0x1c69bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C69B8u, 0x1C69C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69C0u;
label_1c69c0:
    // 0x1c69c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c69c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69c4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C69C4u;
    SET_GPR_U32(ctx, 31, 0x1C69CCu);
    ctx->pc = 0x1C69C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69C4u;
    // 0x1c69c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C69C4u, 0x1C69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69CCu;
label_1c69cc:
    // 0x1c69cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c69ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c69d0:
    // 0x1c69d0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C69D0u;
    SET_GPR_U32(ctx, 31, 0x1C69D8u);
    ctx->pc = 0x1C69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69D0u;
    // 0x1c69d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C69D0u, 0x1C69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69D8u;
label_1c69d8:
    // 0x1c69d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c69d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69dc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c69e0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c69e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c69e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c69e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c69e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c69ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c69ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69f0: 0x260a0064  addiu       $t2, $s0, 0x64
    ctx->pc = 0x1c69f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x1c69f4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C69F4u;
    SET_GPR_U32(ctx, 31, 0x1C69FCu);
    ctx->pc = 0x1C69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69F4u;
    // 0x1c69f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C69F4u, 0x1C69FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69FCu;
label_1c69fc:
    // 0x1c69fc: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1c69fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6a00: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6a04: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6A04u;
    {
        const bool branch_taken_0x1c6a04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A04u;
        // 0x1c6a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a04) {
            ctx->pc = 0x1C6A48u;
            goto label_1c6a48;
        }
    }
    ctx->pc = 0x1C6A0Cu;
    // 0x1c6a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a10: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6A10u;
    SET_GPR_U32(ctx, 31, 0x1C6A18u);
    ctx->pc = 0x1C6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A10u;
    // 0x1c6a14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6A10u, 0x1C6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A18u;
label_1c6a18:
    // 0x1c6a18: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C6A18u;
    SET_GPR_U32(ctx, 31, 0x1C6A20u);
    ctx->pc = 0x1C6A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A18u;
    // 0x1c6a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C6A18u, 0x1C6A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A20u;
label_1c6a20:
    // 0x1c6a20: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c6a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a28: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6A28u;
    SET_GPR_U32(ctx, 31, 0x1C6A30u);
    ctx->pc = 0x1C6A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A28u;
    // 0x1c6a2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6A28u, 0x1C6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A30u;
label_1c6a30:
    // 0x1c6a30: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6A30u;
    SET_GPR_U32(ctx, 31, 0x1C6A38u);
    ctx->pc = 0x1C6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A30u;
    // 0x1c6a34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6A30u, 0x1C6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A38u;
label_1c6a38:
    // 0x1c6a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a3c: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C6A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A44u);
    ctx->pc = 0x1C6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A3Cu;
    // 0x1c6a40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C6A3Cu, 0x1C6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A44u;
label_1c6a44:
    // 0x1c6a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a48:
    // 0x1c6a48: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C6A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A48u;
    // 0x1c6a4c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C6A48u, 0x1C6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0x1040034c  beqz        $v0, . + 4 + (0x34C << 2)
    ctx->pc = 0x1C6A50u;
    {
        const bool branch_taken_0x1c6a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A50u;
        // 0x1c6a54: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a50) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6A58u;
    // 0x1c6a58: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c6a5c: 0xa020f890  sb          $zero, -0x770($at)
    ctx->pc = 0x1c6a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294965392), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6a60: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6a64: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6A64u;
    {
        const bool branch_taken_0x1c6a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A64u;
        // 0x1c6a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a64) {
            ctx->pc = 0x1C6A7Cu;
            goto label_1c6a7c;
        }
    }
    ctx->pc = 0x1C6A6Cu;
    // 0x1c6a6c: 0xc071e44  jal         func_1C7910
    ctx->pc = 0x1C6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A74u);
    ctx->pc = 0x1C6A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A6Cu;
    // 0x1c6a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7910u, 0x1C6A6Cu, 0x1C6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A74u;
label_1c6a74:
    // 0x1c6a74: 0x10000343  b           . + 4 + (0x343 << 2)
    ctx->pc = 0x1C6A74u;
    {
        const bool branch_taken_0x1c6a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a74) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6A7Cu;
label_1c6a7c:
    // 0x1c6a7c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1c6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6a84: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6A84u;
    {
        const bool branch_taken_0x1c6a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A84u;
        // 0x1c6a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a84) {
            ctx->pc = 0x1C6AA0u;
            goto label_1c6aa0;
        }
    }
    ctx->pc = 0x1C6A8Cu;
    // 0x1c6a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a90: 0xc071e44  jal         func_1C7910
    ctx->pc = 0x1C6A90u;
    SET_GPR_U32(ctx, 31, 0x1C6A98u);
    ctx->pc = 0x1C6A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A90u;
    // 0x1c6a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7910u, 0x1C6A90u, 0x1C6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A98u;
label_1c6a98:
    // 0x1c6a98: 0x1000033a  b           . + 4 + (0x33A << 2)
    ctx->pc = 0x1C6A98u;
    {
        const bool branch_taken_0x1c6a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a98) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6AA0u;
label_1c6aa0:
    // 0x1c6aa0: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C6AA0u;
    SET_GPR_U32(ctx, 31, 0x1C6AA8u);
    ctx->pc = 0x1C6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA0u;
    // 0x1c6aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C6AA0u, 0x1C6AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA8u;
label_1c6aa8:
    // 0x1c6aa8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6aac: 0x10000335  b           . + 4 + (0x335 << 2)
    ctx->pc = 0x1C6AACu;
    {
        const bool branch_taken_0x1c6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AACu;
        // 0x1c6ab0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aac) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6AB4u;
label_1c6ab4:
    // 0x1c6ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6ab8: 0x8022f8a8  lb          $v0, -0x758($at)
    ctx->pc = 0x1c6ab8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F8A8u));
    // 0x1c6abc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6ABCu;
    {
        const bool branch_taken_0x1c6abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6abc) {
            ctx->pc = 0x1C6AD8u;
            goto label_1c6ad8;
        }
    }
    ctx->pc = 0x1C6AC4u;
    // 0x1c6ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6acc: 0xa020f8a0  sb          $zero, -0x760($at)
    ctx->pc = 0x1c6accu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A0u, _value); } while (0);
    // 0x1c6ad0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6ad4: 0xa022f8a8  sb          $v0, -0x758($at)
    ctx->pc = 0x1c6ad4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A8u, _value); } while (0);
label_1c6ad8:
    // 0x1c6ad8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6adc: 0x9022f8a0  lbu         $v0, -0x760($at)
    ctx->pc = 0x1c6adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F8A0u));
    // 0x1c6ae0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6AE0u;
    {
        const bool branch_taken_0x1c6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AE0u;
        // 0x1c6ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ae0) {
            ctx->pc = 0x1C6B04u;
            goto label_1c6b04;
        }
    }
    ctx->pc = 0x1C6AE8u;
    // 0x1c6ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aec: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C6AECu;
    SET_GPR_U32(ctx, 31, 0x1C6AF4u);
    ctx->pc = 0x1C6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AECu;
    // 0x1c6af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C6AECu, 0x1C6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AF4u;
label_1c6af4:
    // 0x1c6af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6afc: 0xa022f8a0  sb          $v0, -0x760($at)
    ctx->pc = 0x1c6afcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A0u, _value); } while (0);
    // 0x1c6b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b04:
    // 0x1c6b04: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B04u;
    SET_GPR_U32(ctx, 31, 0x1C6B0Cu);
    ctx->pc = 0x1C6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B04u;
    // 0x1c6b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B04u, 0x1C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0Cu;
label_1c6b0c:
    // 0x1c6b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b10: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B10u;
    SET_GPR_U32(ctx, 31, 0x1C6B18u);
    ctx->pc = 0x1C6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B10u;
    // 0x1c6b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B10u, 0x1C6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B18u;
label_1c6b18:
    // 0x1c6b18: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6b1c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c6b20: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C6B20u;
    {
        const bool branch_taken_0x1c6b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B20u;
        // 0x1c6b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b20) {
            ctx->pc = 0x1C6C24u;
            goto label_1c6c24;
        }
    }
    ctx->pc = 0x1C6B28u;
    // 0x1c6b28: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c6b2c: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C6B2Cu;
    {
        const bool branch_taken_0x1c6b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B2Cu;
        // 0x1c6b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b2c) {
            ctx->pc = 0x1C6C08u;
            goto label_1c6c08;
        }
    }
    ctx->pc = 0x1C6B34u;
    // 0x1c6b34: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6b38: 0x1065002f  beq         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C6B38u;
    {
        const bool branch_taken_0x1c6b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B38u;
        // 0x1c6b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b38) {
            ctx->pc = 0x1C6BF8u;
            goto label_1c6bf8;
        }
    }
    ctx->pc = 0x1C6B40u;
    // 0x1c6b40: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c6b44: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C6B44u;
    {
        const bool branch_taken_0x1c6b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B44u;
        // 0x1c6b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b44) {
            ctx->pc = 0x1C6BDCu;
            goto label_1c6bdc;
        }
    }
    ctx->pc = 0x1C6B4Cu;
    // 0x1c6b4c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c6b50: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6B50u;
    {
        const bool branch_taken_0x1c6b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B50u;
        // 0x1c6b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b50) {
            ctx->pc = 0x1C6BC0u;
            goto label_1c6bc0;
        }
    }
    ctx->pc = 0x1C6B58u;
    // 0x1c6b58: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c6b5c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6B5Cu;
    {
        const bool branch_taken_0x1c6b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B5Cu;
        // 0x1c6b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b5c) {
            ctx->pc = 0x1C6BA4u;
            goto label_1c6ba4;
        }
    }
    ctx->pc = 0x1C6B64u;
    // 0x1c6b64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6b68: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6B68u;
    {
        const bool branch_taken_0x1c6b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B68u;
        // 0x1c6b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b68) {
            ctx->pc = 0x1C6B94u;
            goto label_1c6b94;
        }
    }
    ctx->pc = 0x1C6B70u;
    // 0x1c6b70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6b74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6B74u;
    {
        const bool branch_taken_0x1c6b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B74u;
        // 0x1c6b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b74) {
            ctx->pc = 0x1C6B84u;
            goto label_1c6b84;
        }
    }
    ctx->pc = 0x1C6B7Cu;
    // 0x1c6b7c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C6B7Cu;
    {
        const bool branch_taken_0x1c6b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B7Cu;
        // 0x1c6b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b7c) {
            ctx->pc = 0x1C6C30u;
            goto label_1c6c30;
        }
    }
    ctx->pc = 0x1C6B84u;
label_1c6b84:
    // 0x1c6b84: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B84u;
    SET_GPR_U32(ctx, 31, 0x1C6B8Cu);
    ctx->pc = 0x1C6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B84u;
    // 0x1c6b88: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B84u, 0x1C6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B8Cu;
label_1c6b8c:
    // 0x1c6b8c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C6B8Cu;
    {
        const bool branch_taken_0x1c6b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b8c) {
            ctx->pc = 0x1C6C2Cu;
            goto label_1c6c2c;
        }
    }
    ctx->pc = 0x1C6B94u;
label_1c6b94:
    // 0x1c6b94: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B94u;
    SET_GPR_U32(ctx, 31, 0x1C6B9Cu);
    ctx->pc = 0x1C6B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B94u;
    // 0x1c6b98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B94u, 0x1C6B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9Cu;
label_1c6b9c:
    // 0x1c6b9c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C6B9Cu;
    {
        const bool branch_taken_0x1c6b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b9c) {
            ctx->pc = 0x1C6C2Cu;
            goto label_1c6c2c;
        }
    }
    ctx->pc = 0x1C6BA4u;
label_1c6ba4:
    // 0x1c6ba4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BA4u;
    SET_GPR_U32(ctx, 31, 0x1C6BACu);
    ctx->pc = 0x1C6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA4u;
    // 0x1c6ba8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BA4u, 0x1C6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BACu;
label_1c6bac:
    // 0x1c6bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BB0u;
    SET_GPR_U32(ctx, 31, 0x1C6BB8u);
    ctx->pc = 0x1C6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB0u;
    // 0x1c6bb4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BB0u, 0x1C6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BB8u;
label_1c6bb8:
    // 0x1c6bb8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6BB8u;
    {
        const bool branch_taken_0x1c6bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bb8) {
            ctx->pc = 0x1C6C2Cu;
            goto label_1c6c2c;
        }
    }
    ctx->pc = 0x1C6BC0u;
label_1c6bc0:
    // 0x1c6bc0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BC0u;
    SET_GPR_U32(ctx, 31, 0x1C6BC8u);
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BC0u, 0x1C6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC8u;
label_1c6bc8:
    // 0x1c6bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bcc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BCCu;
    SET_GPR_U32(ctx, 31, 0x1C6BD4u);
    ctx->pc = 0x1C6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCCu;
    // 0x1c6bd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BCCu, 0x1C6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BD4u;
label_1c6bd4:
    // 0x1c6bd4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6BD4u;
    {
        const bool branch_taken_0x1c6bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bd4) {
            ctx->pc = 0x1C6C2Cu;
            goto label_1c6c2c;
        }
    }
    ctx->pc = 0x1C6BDCu;
label_1c6bdc:
    // 0x1c6bdc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BDCu;
    SET_GPR_U32(ctx, 31, 0x1C6BE4u);
    ctx->pc = 0x1C6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BDCu;
    // 0x1c6be0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BDCu, 0x1C6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE4u;
label_1c6be4:
    // 0x1c6be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BE8u;
    SET_GPR_U32(ctx, 31, 0x1C6BF0u);
    ctx->pc = 0x1C6BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE8u;
    // 0x1c6bec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BE8u, 0x1C6BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF0u;
label_1c6bf0:
    // 0x1c6bf0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C6BF0u;
    {
        const bool branch_taken_0x1c6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bf0) {
            ctx->pc = 0x1C6C2Cu;
            goto label_1c6c2c;
        }
    }
    ctx->pc = 0x1C6BF8u;
label_1c6bf8:
    // 0x1c6bf8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6BF8u;
    SET_GPR_U32(ctx, 31, 0x1C6C00u);
    ctx->pc = 0x1C6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF8u;
    // 0x1c6bfc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6BF8u, 0x1C6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C00u;
label_1c6c00:
    // 0x1c6c00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C6C00u;
    {
        const bool branch_taken_0x1c6c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c00) {
            ctx->pc = 0x1C6C2Cu;
            goto label_1c6c2c;
        }
    }
    ctx->pc = 0x1C6C08u;
label_1c6c08:
    // 0x1c6c08: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6C08u;
    SET_GPR_U32(ctx, 31, 0x1C6C10u);
    ctx->pc = 0x1C6C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C08u;
    // 0x1c6c0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6C08u, 0x1C6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C10u;
label_1c6c10:
    // 0x1c6c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c14: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6C14u;
    SET_GPR_U32(ctx, 31, 0x1C6C1Cu);
    ctx->pc = 0x1C6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C14u;
    // 0x1c6c18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6C14u, 0x1C6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1Cu;
label_1c6c1c:
    // 0x1c6c1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6C1Cu;
    {
        const bool branch_taken_0x1c6c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c1c) {
            ctx->pc = 0x1C6C2Cu;
            goto label_1c6c2c;
        }
    }
    ctx->pc = 0x1C6C24u;
label_1c6c24:
    // 0x1c6c24: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6C24u;
    SET_GPR_U32(ctx, 31, 0x1C6C2Cu);
    ctx->pc = 0x1C6C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C24u;
    // 0x1c6c28: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6C24u, 0x1C6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C2Cu;
label_1c6c2c:
    // 0x1c6c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c30:
    // 0x1c6c30: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c6c34: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c6c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c6c38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c6c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6c40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c44: 0x260a0064  addiu       $t2, $s0, 0x64
    ctx->pc = 0x1c6c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x1c6c48: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C6C48u;
    SET_GPR_U32(ctx, 31, 0x1C6C50u);
    ctx->pc = 0x1C6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C48u;
    // 0x1c6c4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C6C48u, 0x1C6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C50u;
label_1c6c50:
    // 0x1c6c50: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1c6c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6c54: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6c58: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6C58u;
    {
        const bool branch_taken_0x1c6c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C58u;
        // 0x1c6c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c58) {
            ctx->pc = 0x1C6C9Cu;
            goto label_1c6c9c;
        }
    }
    ctx->pc = 0x1C6C60u;
    // 0x1c6c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c64: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6C64u;
    SET_GPR_U32(ctx, 31, 0x1C6C6Cu);
    ctx->pc = 0x1C6C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C64u;
    // 0x1c6c68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6C64u, 0x1C6C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C6Cu;
label_1c6c6c:
    // 0x1c6c6c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C6C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C74u);
    ctx->pc = 0x1C6C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C6Cu;
    // 0x1c6c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C6C6Cu, 0x1C6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C74u;
label_1c6c74:
    // 0x1c6c74: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c6c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c6c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c7c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C84u);
    ctx->pc = 0x1C6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C7Cu;
    // 0x1c6c80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C6C7Cu, 0x1C6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C84u;
label_1c6c84:
    // 0x1c6c84: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6C84u;
    SET_GPR_U32(ctx, 31, 0x1C6C8Cu);
    ctx->pc = 0x1C6C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C84u;
    // 0x1c6c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6C84u, 0x1C6C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C8Cu;
label_1c6c8c:
    // 0x1c6c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c90: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C6C90u;
    SET_GPR_U32(ctx, 31, 0x1C6C98u);
    ctx->pc = 0x1C6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C90u;
    // 0x1c6c94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C6C90u, 0x1C6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C98u;
label_1c6c98:
    // 0x1c6c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c9c:
    // 0x1c6c9c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C6C9Cu;
    SET_GPR_U32(ctx, 31, 0x1C6CA4u);
    ctx->pc = 0x1C6CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C9Cu;
    // 0x1c6ca0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C6C9Cu, 0x1C6CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CA4u;
label_1c6ca4:
    // 0x1c6ca4: 0x104002b7  beqz        $v0, . + 4 + (0x2B7 << 2)
    ctx->pc = 0x1C6CA4u;
    {
        const bool branch_taken_0x1c6ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CA4u;
        // 0x1c6ca8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ca4) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6CACu;
    // 0x1c6cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cb4: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C6CB4u;
    SET_GPR_U32(ctx, 31, 0x1C6CBCu);
    ctx->pc = 0x1C6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CB4u;
    // 0x1c6cb8: 0xac20f880  sw          $zero, -0x780($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965376), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C6CB4u, 0x1C6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CBCu;
label_1c6cbc:
    // 0x1c6cbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6cc4: 0xa020f8a0  sb          $zero, -0x760($at)
    ctx->pc = 0x1c6cc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A0u, _value); } while (0);
    // 0x1c6cc8: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1c6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6ccc: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C6CCCu;
    {
        const bool branch_taken_0x1c6ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c6ccc) {
            ctx->pc = 0x1C6D54u;
            goto label_1c6d54;
        }
    }
    ctx->pc = 0x1C6CD4u;
    // 0x1c6cd4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6cd8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6cdc: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6CDCu;
    {
        const bool branch_taken_0x1c6cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CDCu;
        // 0x1c6ce0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cdc) {
            ctx->pc = 0x1C6D44u;
            goto label_1c6d44;
        }
    }
    ctx->pc = 0x1C6CE4u;
    // 0x1c6ce4: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6CE4u;
    {
        const bool branch_taken_0x1c6ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CE4u;
        // 0x1c6ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ce4) {
            ctx->pc = 0x1C6D34u;
            goto label_1c6d34;
        }
    }
    ctx->pc = 0x1C6CECu;
    // 0x1c6cec: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c6cf0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C6CF0u;
    {
        const bool branch_taken_0x1c6cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CF0u;
        // 0x1c6cf4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cf0) {
            ctx->pc = 0x1C6D30u;
            goto label_1c6d30;
        }
    }
    ctx->pc = 0x1C6CF8u;
    // 0x1c6cf8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6CF8u;
    {
        const bool branch_taken_0x1c6cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6cf8) {
            ctx->pc = 0x1C6D30u;
            goto label_1c6d30;
        }
    }
    ctx->pc = 0x1C6D00u;
    // 0x1c6d00: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c6d04: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6D04u;
    {
        const bool branch_taken_0x1c6d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D04u;
        // 0x1c6d08: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d04) {
            ctx->pc = 0x1C6D30u;
            goto label_1c6d30;
        }
    }
    ctx->pc = 0x1C6D0Cu;
    // 0x1c6d0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6D0Cu;
    {
        const bool branch_taken_0x1c6d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d0c) {
            ctx->pc = 0x1C6D30u;
            goto label_1c6d30;
        }
    }
    ctx->pc = 0x1C6D14u;
    // 0x1c6d14: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6d18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D18u;
    {
        const bool branch_taken_0x1c6d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d18) {
            ctx->pc = 0x1C6D28u;
            goto label_1c6d28;
        }
    }
    ctx->pc = 0x1C6D20u;
    // 0x1c6d20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6D20u;
    {
        const bool branch_taken_0x1c6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d20) {
            ctx->pc = 0x1C6D48u;
            goto label_1c6d48;
        }
    }
    ctx->pc = 0x1C6D28u;
label_1c6d28:
    // 0x1c6d28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6D28u;
    {
        const bool branch_taken_0x1c6d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D28u;
        // 0x1c6d2c: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d28) {
            ctx->pc = 0x1C6D48u;
            goto label_1c6d48;
        }
    }
    ctx->pc = 0x1C6D30u;
label_1c6d30:
    // 0x1c6d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c6d34:
    // 0x1c6d34: 0xc071e44  jal         func_1C7910
    ctx->pc = 0x1C6D34u;
    SET_GPR_U32(ctx, 31, 0x1C6D3Cu);
    ctx->pc = 0x1C6D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D34u;
    // 0x1c6d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7910u, 0x1C6D34u, 0x1C6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D3Cu;
label_1c6d3c:
    // 0x1c6d3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6D3Cu;
    {
        const bool branch_taken_0x1c6d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d3c) {
            ctx->pc = 0x1C6D48u;
            goto label_1c6d48;
        }
    }
    ctx->pc = 0x1C6D44u;
label_1c6d44:
    // 0x1c6d44: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1c6d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1c6d48:
    // 0x1c6d48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6d4c: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x1C6D4Cu;
    {
        const bool branch_taken_0x1c6d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D4Cu;
        // 0x1c6d50: 0xa020f8a0  sb          $zero, -0x760($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294965408), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d4c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6D54u;
label_1c6d54:
    // 0x1c6d54: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6d58: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6d5c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C6D5Cu;
    {
        const bool branch_taken_0x1c6d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D5Cu;
        // 0x1c6d60: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d5c) {
            ctx->pc = 0x1C6DF0u;
            goto label_1c6df0;
        }
    }
    ctx->pc = 0x1C6D64u;
    // 0x1c6d64: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c6d68: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C6D68u;
    {
        const bool branch_taken_0x1c6d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D68u;
        // 0x1c6d6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d68) {
            ctx->pc = 0x1C6DE8u;
            goto label_1c6de8;
        }
    }
    ctx->pc = 0x1C6D70u;
    // 0x1c6d70: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c6d74: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6D74u;
    {
        const bool branch_taken_0x1c6d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D74u;
        // 0x1c6d78: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d74) {
            ctx->pc = 0x1C6DE4u;
            goto label_1c6de4;
        }
    }
    ctx->pc = 0x1C6D7Cu;
    // 0x1c6d7c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6D7Cu;
    {
        const bool branch_taken_0x1c6d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d7c) {
            ctx->pc = 0x1C6DE4u;
            goto label_1c6de4;
        }
    }
    ctx->pc = 0x1C6D84u;
    // 0x1c6d84: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c6d88: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C6D88u;
    {
        const bool branch_taken_0x1c6d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D88u;
        // 0x1c6d8c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d88) {
            ctx->pc = 0x1C6DE4u;
            goto label_1c6de4;
        }
    }
    ctx->pc = 0x1C6D90u;
    // 0x1c6d90: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6D90u;
    {
        const bool branch_taken_0x1c6d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d90) {
            ctx->pc = 0x1C6DD8u;
            goto label_1c6dd8;
        }
    }
    ctx->pc = 0x1C6D98u;
    // 0x1c6d98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6d9c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6D9Cu;
    {
        const bool branch_taken_0x1c6d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D9Cu;
        // 0x1c6da0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d9c) {
            ctx->pc = 0x1C6DD0u;
            goto label_1c6dd0;
        }
    }
    ctx->pc = 0x1C6DA4u;
    // 0x1c6da4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c6da8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6DA8u;
    {
        const bool branch_taken_0x1c6da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DA8u;
        // 0x1c6dac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6da8) {
            ctx->pc = 0x1C6DC8u;
            goto label_1c6dc8;
        }
    }
    ctx->pc = 0x1C6DB0u;
    // 0x1c6db0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6db4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6DB4u;
    {
        const bool branch_taken_0x1c6db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6db4) {
            ctx->pc = 0x1C6DC4u;
            goto label_1c6dc4;
        }
    }
    ctx->pc = 0x1C6DBCu;
    // 0x1c6dbc: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x1C6DBCu;
    {
        const bool branch_taken_0x1c6dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6dbc) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6DC4u;
label_1c6dc4:
    // 0x1c6dc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c6dc8:
    // 0x1c6dc8: 0x1000026e  b           . + 4 + (0x26E << 2)
    ctx->pc = 0x1C6DC8u;
    {
        const bool branch_taken_0x1c6dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DC8u;
        // 0x1c6dcc: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dc8) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6DD0u;
label_1c6dd0:
    // 0x1c6dd0: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x1C6DD0u;
    {
        const bool branch_taken_0x1c6dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DD0u;
        // 0x1c6dd4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dd0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6DD8u;
label_1c6dd8:
    // 0x1c6dd8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1c6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c6ddc: 0x10000269  b           . + 4 + (0x269 << 2)
    ctx->pc = 0x1C6DDCu;
    {
        const bool branch_taken_0x1c6ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DDCu;
        // 0x1c6de0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ddc) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6DE4u;
label_1c6de4:
    // 0x1c6de4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c6de8:
    // 0x1c6de8: 0x10000266  b           . + 4 + (0x266 << 2)
    ctx->pc = 0x1C6DE8u;
    {
        const bool branch_taken_0x1c6de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DE8u;
        // 0x1c6dec: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6de8) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6DF0u;
label_1c6df0:
    // 0x1c6df0: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x1C6DF0u;
    {
        const bool branch_taken_0x1c6df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DF0u;
        // 0x1c6df4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6df0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6DF8u;
label_1c6df8:
    // 0x1c6df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dfc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6DFCu;
    SET_GPR_U32(ctx, 31, 0x1C6E04u);
    ctx->pc = 0x1C6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DFCu;
    // 0x1c6e00: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6DFCu, 0x1C6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E04u;
label_1c6e04:
    // 0x1c6e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e08: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E08u;
    SET_GPR_U32(ctx, 31, 0x1C6E10u);
    ctx->pc = 0x1C6E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E08u;
    // 0x1c6e0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E08u, 0x1C6E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E10u;
label_1c6e10:
    // 0x1c6e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e14: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E14u;
    SET_GPR_U32(ctx, 31, 0x1C6E1Cu);
    ctx->pc = 0x1C6E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E14u;
    // 0x1c6e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E14u, 0x1C6E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E1Cu;
label_1c6e1c:
    // 0x1c6e1c: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E24u);
    ctx->pc = 0x1C6E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E1Cu;
    // 0x1c6e20: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C6E1Cu, 0x1C6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E24u;
label_1c6e24:
    // 0x1c6e24: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1c6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c6e28: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x1C6E28u;
    {
        const bool branch_taken_0x1c6e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E28u;
        // 0x1c6e2c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e28) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6E30u;
label_1c6e30:
    // 0x1c6e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e34: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E34u;
    SET_GPR_U32(ctx, 31, 0x1C6E3Cu);
    ctx->pc = 0x1C6E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E34u;
    // 0x1c6e38: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E34u, 0x1C6E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E3Cu;
label_1c6e3c:
    // 0x1c6e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e40: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E40u;
    SET_GPR_U32(ctx, 31, 0x1C6E48u);
    ctx->pc = 0x1C6E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E40u;
    // 0x1c6e44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E40u, 0x1C6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E48u;
label_1c6e48:
    // 0x1c6e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e4c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E54u);
    ctx->pc = 0x1C6E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E4Cu;
    // 0x1c6e50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E4Cu, 0x1C6E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E54u;
label_1c6e54:
    // 0x1c6e54: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C6E54u;
    SET_GPR_U32(ctx, 31, 0x1C6E5Cu);
    ctx->pc = 0x1C6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E54u;
    // 0x1c6e58: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C6E54u, 0x1C6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E5Cu;
label_1c6e5c:
    // 0x1c6e5c: 0x14400249  bnez        $v0, . + 4 + (0x249 << 2)
    ctx->pc = 0x1C6E5Cu;
    {
        const bool branch_taken_0x1c6e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e5c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6E64u;
    // 0x1c6e64: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1c6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c6e68: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x1C6E68u;
    {
        const bool branch_taken_0x1c6e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E68u;
        // 0x1c6e6c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e68) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6E70u;
label_1c6e70:
    // 0x1c6e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e74: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E74u;
    SET_GPR_U32(ctx, 31, 0x1C6E7Cu);
    ctx->pc = 0x1C6E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E74u;
    // 0x1c6e78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E74u, 0x1C6E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E7Cu;
label_1c6e7c:
    // 0x1c6e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e80: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E80u;
    SET_GPR_U32(ctx, 31, 0x1C6E88u);
    ctx->pc = 0x1C6E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E80u;
    // 0x1c6e84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E80u, 0x1C6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E88u;
label_1c6e88:
    // 0x1c6e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e8c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E94u);
    ctx->pc = 0x1C6E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E8Cu;
    // 0x1c6e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E8Cu, 0x1C6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E94u;
label_1c6e94:
    // 0x1c6e94: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1c6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c6e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6e9c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6E9Cu;
    {
        const bool branch_taken_0x1c6e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E9Cu;
        // 0x1c6ea0: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e9c) {
            ctx->pc = 0x1C6EB0u;
            goto label_1c6eb0;
        }
    }
    ctx->pc = 0x1C6EA4u;
    // 0x1c6ea4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c6ea8: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x1C6EA8u;
    {
        const bool branch_taken_0x1c6ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EA8u;
        // 0x1c6eac: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ea8) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6EB0u;
label_1c6eb0:
    // 0x1c6eb0: 0x10000234  b           . + 4 + (0x234 << 2)
    ctx->pc = 0x1C6EB0u;
    {
        const bool branch_taken_0x1c6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EB0u;
        // 0x1c6eb4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eb0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6EB8u;
label_1c6eb8:
    // 0x1c6eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ebc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6EBCu;
    SET_GPR_U32(ctx, 31, 0x1C6EC4u);
    ctx->pc = 0x1C6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EBCu;
    // 0x1c6ec0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6EBCu, 0x1C6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EC4u;
label_1c6ec4:
    // 0x1c6ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ec8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6EC8u;
    SET_GPR_U32(ctx, 31, 0x1C6ED0u);
    ctx->pc = 0x1C6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EC8u;
    // 0x1c6ecc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6EC8u, 0x1C6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ED0u;
label_1c6ed0:
    // 0x1c6ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ed4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6ED4u;
    SET_GPR_U32(ctx, 31, 0x1C6EDCu);
    ctx->pc = 0x1C6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ED4u;
    // 0x1c6ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6ED4u, 0x1C6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EDCu;
label_1c6edc:
    // 0x1c6edc: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1c6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1c6ee0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6EE0u;
    {
        const bool branch_taken_0x1c6ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EE0u;
        // 0x1c6ee4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ee0) {
            ctx->pc = 0x1C6EF4u;
            goto label_1c6ef4;
        }
    }
    ctx->pc = 0x1C6EE8u;
    // 0x1c6ee8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6eec: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x1C6EECu;
    {
        const bool branch_taken_0x1c6eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EECu;
        // 0x1c6ef0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eec) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6EF4u;
label_1c6ef4:
    // 0x1c6ef4: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x1C6EF4u;
    {
        const bool branch_taken_0x1c6ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EF4u;
        // 0x1c6ef8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ef4) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6EFCu;
label_1c6efc:
    // 0x1c6efc: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C6EFCu;
    SET_GPR_U32(ctx, 31, 0x1C6F04u);
    ctx->pc = 0x1C6F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EFCu;
    // 0x1c6f00: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C6EFCu, 0x1C6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F04u;
label_1c6f04:
    // 0x1c6f04: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1c6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c6f08: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x1C6F08u;
    {
        const bool branch_taken_0x1c6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F08u;
        // 0x1c6f0c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f08) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6F10u;
label_1c6f10:
    // 0x1c6f10: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C6F10u;
    SET_GPR_U32(ctx, 31, 0x1C6F18u);
    ctx->pc = 0x1C6F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F10u;
    // 0x1c6f14: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C6F10u, 0x1C6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F18u;
label_1c6f18:
    // 0x1c6f18: 0x1440021a  bnez        $v0, . + 4 + (0x21A << 2)
    ctx->pc = 0x1C6F18u;
    {
        const bool branch_taken_0x1c6f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F18u;
        // 0x1c6f1c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f18) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6F20u;
    // 0x1c6f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6f24: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1c6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1c6f28: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1c6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c6f2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6F2Cu;
    {
        const bool branch_taken_0x1c6f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F2Cu;
        // 0x1c6f30: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f2c) {
            ctx->pc = 0x1C6F3Cu;
            goto label_1c6f3c;
        }
    }
    ctx->pc = 0x1C6F34u;
    // 0x1c6f34: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x1C6F34u;
    {
        const bool branch_taken_0x1c6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F34u;
        // 0x1c6f38: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f34) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6F3Cu;
label_1c6f3c:
    // 0x1c6f3c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1c6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1c6f40: 0x10600210  beqz        $v1, . + 4 + (0x210 << 2)
    ctx->pc = 0x1C6F40u;
    {
        const bool branch_taken_0x1c6f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F40u;
        // 0x1c6f44: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f40) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6F48u;
    // 0x1c6f48: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6F48u;
    {
        const bool branch_taken_0x1c6f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6f48) {
            ctx->pc = 0x1C6F94u;
            goto label_1c6f94;
        }
    }
    ctx->pc = 0x1C6F50u;
    // 0x1c6f50: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c6f54: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6F54u;
    {
        const bool branch_taken_0x1c6f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F54u;
        // 0x1c6f58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f54) {
            ctx->pc = 0x1C6F8Cu;
            goto label_1c6f8c;
        }
    }
    ctx->pc = 0x1C6F5Cu;
    // 0x1c6f5c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c6f60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6F60u;
    {
        const bool branch_taken_0x1c6f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F60u;
        // 0x1c6f64: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f60) {
            ctx->pc = 0x1C6F80u;
            goto label_1c6f80;
        }
    }
    ctx->pc = 0x1C6F68u;
    // 0x1c6f68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6f6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6F6Cu;
    {
        const bool branch_taken_0x1c6f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6f6c) {
            ctx->pc = 0x1C6F7Cu;
            goto label_1c6f7c;
        }
    }
    ctx->pc = 0x1C6F74u;
    // 0x1c6f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6F74u;
    {
        const bool branch_taken_0x1c6f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f74) {
            ctx->pc = 0x1C6F88u;
            goto label_1c6f88;
        }
    }
    ctx->pc = 0x1C6F7Cu;
label_1c6f7c:
    // 0x1c6f7c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c6f80:
    // 0x1c6f80: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x1C6F80u;
    {
        const bool branch_taken_0x1c6f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F80u;
        // 0x1c6f84: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f80) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6F88u;
label_1c6f88:
    // 0x1c6f88: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c6f8c:
    // 0x1c6f8c: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x1C6F8Cu;
    {
        const bool branch_taken_0x1c6f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F8Cu;
        // 0x1c6f90: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f8c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6F94u;
label_1c6f94:
    // 0x1c6f94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6f98: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x1C6F98u;
    {
        const bool branch_taken_0x1c6f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F98u;
        // 0x1c6f9c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f98) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6FA0u;
label_1c6fa0:
    // 0x1c6fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fa4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FA4u;
    SET_GPR_U32(ctx, 31, 0x1C6FACu);
    ctx->pc = 0x1C6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FA4u;
    // 0x1c6fa8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FA4u, 0x1C6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FACu;
label_1c6fac:
    // 0x1c6fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fb0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FB0u;
    SET_GPR_U32(ctx, 31, 0x1C6FB8u);
    ctx->pc = 0x1C6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FB0u;
    // 0x1c6fb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FB0u, 0x1C6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FB8u;
label_1c6fb8:
    // 0x1c6fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fbc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FBCu;
    SET_GPR_U32(ctx, 31, 0x1C6FC4u);
    ctx->pc = 0x1C6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FBCu;
    // 0x1c6fc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FBCu, 0x1C6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FC4u;
label_1c6fc4:
    // 0x1c6fc4: 0xc07468c  jal         func_1D1A30
    ctx->pc = 0x1C6FC4u;
    SET_GPR_U32(ctx, 31, 0x1C6FCCu);
    ctx->pc = 0x1C6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FC4u;
    // 0x1c6fc8: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A30u, 0x1C6FC4u, 0x1C6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FCCu;
label_1c6fcc:
    // 0x1c6fcc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c6fd0: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x1C6FD0u;
    {
        const bool branch_taken_0x1c6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FD0u;
        // 0x1c6fd4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fd0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C6FD8u;
label_1c6fd8:
    // 0x1c6fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fdc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FDCu;
    SET_GPR_U32(ctx, 31, 0x1C6FE4u);
    ctx->pc = 0x1C6FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FDCu;
    // 0x1c6fe0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FDCu, 0x1C6FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FE4u;
label_1c6fe4:
    // 0x1c6fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fe8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FE8u;
    SET_GPR_U32(ctx, 31, 0x1C6FF0u);
    ctx->pc = 0x1C6FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FE8u;
    // 0x1c6fec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FE8u, 0x1C6FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FF0u;
label_1c6ff0:
    // 0x1c6ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ff4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6FF4u;
    SET_GPR_U32(ctx, 31, 0x1C6FFCu);
    ctx->pc = 0x1C6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FF4u;
    // 0x1c6ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6FF4u, 0x1C6FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FFCu;
label_1c6ffc:
    // 0x1c6ffc: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1c7000: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7004: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7004u;
    {
        const bool branch_taken_0x1c7004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7004u;
        // 0x1c7008: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7004) {
            ctx->pc = 0x1C701Cu;
            goto label_1c701c;
        }
    }
    ctx->pc = 0x1C700Cu;
    // 0x1c700c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1c700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c7010: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1c7014: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7018: 0xac22f888  sw          $v0, -0x778($at)
    ctx->pc = 0x1c7018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F888u, _value); } while (0);
label_1c701c:
    // 0x1c701c: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x1c701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1c7020: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7024: 0x146201d7  bne         $v1, $v0, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1C7024u;
    {
        const bool branch_taken_0x1c7024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7024u;
        // 0x1c7028: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7024) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C702Cu;
    // 0x1c702c: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1C702Cu;
    {
        const bool branch_taken_0x1c702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C702Cu;
        // 0x1c7030: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c702c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7034u;
label_1c7034:
    // 0x1c7034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7038: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7038u;
    SET_GPR_U32(ctx, 31, 0x1C7040u);
    ctx->pc = 0x1C703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7038u;
    // 0x1c703c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7038u, 0x1C7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7040u;
label_1c7040:
    // 0x1c7040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7044: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7044u;
    SET_GPR_U32(ctx, 31, 0x1C704Cu);
    ctx->pc = 0x1C7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7044u;
    // 0x1c7048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7044u, 0x1C704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C704Cu;
label_1c704c:
    // 0x1c704c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7050: 0x8c22f888  lw          $v0, -0x778($at)
    ctx->pc = 0x1c7050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F888u));
    // 0x1c7054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c7058: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c705c: 0xac22f888  sw          $v0, -0x778($at)
    ctx->pc = 0x1c705cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F888u, _value); } while (0);
    // 0x1c7060: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7064: 0x8c22f888  lw          $v0, -0x778($at)
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F888u));
    // 0x1c7068: 0x144001c6  bnez        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x1C7068u;
    {
        const bool branch_taken_0x1c7068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7068u;
        // 0x1c706c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7068) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7070u;
    // 0x1c7070: 0x100001c4  b           . + 4 + (0x1C4 << 2)
    ctx->pc = 0x1C7070u;
    {
        const bool branch_taken_0x1c7070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7070u;
        // 0x1c7074: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7070) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7078u;
label_1c7078:
    // 0x1c7078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c707c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C707Cu;
    SET_GPR_U32(ctx, 31, 0x1C7084u);
    ctx->pc = 0x1C7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C707Cu;
    // 0x1c7080: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C707Cu, 0x1C7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7084u;
label_1c7084:
    // 0x1c7084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7088: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7088u;
    SET_GPR_U32(ctx, 31, 0x1C7090u);
    ctx->pc = 0x1C708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7088u;
    // 0x1c708c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7088u, 0x1C7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7090u;
label_1c7090:
    // 0x1c7090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7094: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7094u;
    SET_GPR_U32(ctx, 31, 0x1C709Cu);
    ctx->pc = 0x1C7098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7094u;
    // 0x1c7098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7094u, 0x1C709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C709Cu;
label_1c709c:
    // 0x1c709c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c709cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c70a0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c70a4: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C70A4u;
    SET_GPR_U32(ctx, 31, 0x1C70ACu);
    ctx->pc = 0x1C70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70A4u;
    // 0x1c70a8: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C70A4u, 0x1C70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70ACu;
label_1c70ac:
    // 0x1c70ac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c70b0: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x1C70B0u;
    {
        const bool branch_taken_0x1c70b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70B0u;
        // 0x1c70b4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70b0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C70B8u;
label_1c70b8:
    // 0x1c70b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70bc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C70BCu;
    SET_GPR_U32(ctx, 31, 0x1C70C4u);
    ctx->pc = 0x1C70C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70BCu;
    // 0x1c70c0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C70BCu, 0x1C70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70C4u;
label_1c70c4:
    // 0x1c70c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70c8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C70C8u;
    SET_GPR_U32(ctx, 31, 0x1C70D0u);
    ctx->pc = 0x1C70CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70C8u;
    // 0x1c70cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C70C8u, 0x1C70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70D0u;
label_1c70d0:
    // 0x1c70d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70d4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C70D4u;
    SET_GPR_U32(ctx, 31, 0x1C70DCu);
    ctx->pc = 0x1C70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70D4u;
    // 0x1c70d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C70D4u, 0x1C70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70DCu;
label_1c70dc:
    // 0x1c70dc: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c70e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c70e4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C70E4u;
    {
        const bool branch_taken_0x1c70e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c70e4) {
            ctx->pc = 0x1C710Cu;
            goto label_1c710c;
        }
    }
    ctx->pc = 0x1C70ECu;
    // 0x1c70ec: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x1c70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1c70f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c70f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C70F4u;
    {
        const bool branch_taken_0x1c70f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70F4u;
        // 0x1c70f8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70f4) {
            ctx->pc = 0x1C7108u;
            goto label_1c7108;
        }
    }
    ctx->pc = 0x1C70FCu;
    // 0x1c70fc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c7100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7100u;
    {
        const bool branch_taken_0x1c7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7100u;
        // 0x1c7104: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7100) {
            ctx->pc = 0x1C710Cu;
            goto label_1c710c;
        }
    }
    ctx->pc = 0x1C7108u;
label_1c7108:
    // 0x1c7108: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c710c:
    // 0x1c710c: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c7110: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7114: 0x1462019b  bne         $v1, $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x1C7114u;
    {
        const bool branch_taken_0x1c7114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7114u;
        // 0x1c7118: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7114) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C711Cu;
    // 0x1c711c: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x1C711Cu;
    {
        const bool branch_taken_0x1c711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C711Cu;
        // 0x1c7120: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c711c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7124u;
label_1c7124:
    // 0x1c7124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7128: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7128u;
    SET_GPR_U32(ctx, 31, 0x1C7130u);
    ctx->pc = 0x1C712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7128u;
    // 0x1c712c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7128u, 0x1C7130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7130u;
label_1c7130:
    // 0x1c7130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7134: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7134u;
    SET_GPR_U32(ctx, 31, 0x1C713Cu);
    ctx->pc = 0x1C7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7134u;
    // 0x1c7138: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7134u, 0x1C713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C713Cu;
label_1c713c:
    // 0x1c713c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7140: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7140u;
    SET_GPR_U32(ctx, 31, 0x1C7148u);
    ctx->pc = 0x1C7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7140u;
    // 0x1c7144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7140u, 0x1C7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7148u;
label_1c7148:
    // 0x1c7148: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c714c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7150: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C7150u;
    SET_GPR_U32(ctx, 31, 0x1C7158u);
    ctx->pc = 0x1C7154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7150u;
    // 0x1c7154: 0x24a520d0  addiu       $a1, $a1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C7150u, 0x1C7158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7158u;
label_1c7158:
    // 0x1c7158: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c7158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c715c: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x1C715Cu;
    {
        const bool branch_taken_0x1c715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C715Cu;
        // 0x1c7160: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c715c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7164u;
label_1c7164:
    // 0x1c7164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7168: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7168u;
    SET_GPR_U32(ctx, 31, 0x1C7170u);
    ctx->pc = 0x1C716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7168u;
    // 0x1c716c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7168u, 0x1C7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7170u;
label_1c7170:
    // 0x1c7170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7174: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7174u;
    SET_GPR_U32(ctx, 31, 0x1C717Cu);
    ctx->pc = 0x1C7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7174u;
    // 0x1c7178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7174u, 0x1C717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C717Cu;
label_1c717c:
    // 0x1c717c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7180: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7180u;
    SET_GPR_U32(ctx, 31, 0x1C7188u);
    ctx->pc = 0x1C7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7180u;
    // 0x1c7184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7180u, 0x1C7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7188u;
label_1c7188:
    // 0x1c7188: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c7188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c718c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7190: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7190u;
    {
        const bool branch_taken_0x1c7190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7190) {
            ctx->pc = 0x1C71B8u;
            goto label_1c71b8;
        }
    }
    ctx->pc = 0x1C7198u;
    // 0x1c7198: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x1c7198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1c719c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c71a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C71A0u;
    {
        const bool branch_taken_0x1c71a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71A0u;
        // 0x1c71a4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71a0) {
            ctx->pc = 0x1C71B4u;
            goto label_1c71b4;
        }
    }
    ctx->pc = 0x1C71A8u;
    // 0x1c71a8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c71ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C71ACu;
    {
        const bool branch_taken_0x1c71ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71ACu;
        // 0x1c71b0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71ac) {
            ctx->pc = 0x1C71B8u;
            goto label_1c71b8;
        }
    }
    ctx->pc = 0x1C71B4u;
label_1c71b4:
    // 0x1c71b4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c71b8:
    // 0x1c71b8: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c71bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c71c0: 0x14620170  bne         $v1, $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x1C71C0u;
    {
        const bool branch_taken_0x1c71c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71C0u;
        // 0x1c71c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71c0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C71C8u;
    // 0x1c71c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c71c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c71cc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c71d0: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c71d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c71d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c71d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c71dc: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c71dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c71e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c71e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c71e4: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c71e8: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c71e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c71ec: 0x14400165  bnez        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x1C71ECu;
    {
        const bool branch_taken_0x1c71ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c71ec) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C71F4u;
    // 0x1c71f4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c71f8: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x1C71F8u;
    {
        const bool branch_taken_0x1c71f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71F8u;
        // 0x1c71fc: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71f8) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7200u;
label_1c7200:
    // 0x1c7200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7204: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7204u;
    SET_GPR_U32(ctx, 31, 0x1C720Cu);
    ctx->pc = 0x1C7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7204u;
    // 0x1c7208: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7204u, 0x1C720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C720Cu;
label_1c720c:
    // 0x1c720c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7210: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7210u;
    SET_GPR_U32(ctx, 31, 0x1C7218u);
    ctx->pc = 0x1C7214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7210u;
    // 0x1c7214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7210u, 0x1C7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7218u;
label_1c7218:
    // 0x1c7218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c721c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C721Cu;
    SET_GPR_U32(ctx, 31, 0x1C7224u);
    ctx->pc = 0x1C7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C721Cu;
    // 0x1c7220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C721Cu, 0x1C7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7224u;
label_1c7224:
    // 0x1c7224: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7228: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c722c: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C722Cu;
    SET_GPR_U32(ctx, 31, 0x1C7234u);
    ctx->pc = 0x1C7230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C722Cu;
    // 0x1c7230: 0x24a520d0  addiu       $a1, $a1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C722Cu, 0x1C7234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7234u;
label_1c7234:
    // 0x1c7234: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1c7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c7238: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x1C7238u;
    {
        const bool branch_taken_0x1c7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7238u;
        // 0x1c723c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7238) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7240u;
label_1c7240:
    // 0x1c7240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7244: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7244u;
    SET_GPR_U32(ctx, 31, 0x1C724Cu);
    ctx->pc = 0x1C7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7244u;
    // 0x1c7248: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7244u, 0x1C724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C724Cu;
label_1c724c:
    // 0x1c724c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c724cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7250: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7250u;
    SET_GPR_U32(ctx, 31, 0x1C7258u);
    ctx->pc = 0x1C7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7250u;
    // 0x1c7254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7250u, 0x1C7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7258u;
label_1c7258:
    // 0x1c7258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c725c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C725Cu;
    SET_GPR_U32(ctx, 31, 0x1C7264u);
    ctx->pc = 0x1C7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C725Cu;
    // 0x1c7260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C725Cu, 0x1C7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7264u;
label_1c7264:
    // 0x1c7264: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c726c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C726Cu;
    {
        const bool branch_taken_0x1c726c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c726c) {
            ctx->pc = 0x1C7294u;
            goto label_1c7294;
        }
    }
    ctx->pc = 0x1C7274u;
    // 0x1c7274: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c7278: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1c727c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C727Cu;
    {
        const bool branch_taken_0x1c727c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C727Cu;
        // 0x1c7280: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c727c) {
            ctx->pc = 0x1C7290u;
            goto label_1c7290;
        }
    }
    ctx->pc = 0x1C7284u;
    // 0x1c7284: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c7288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7288u;
    {
        const bool branch_taken_0x1c7288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7288u;
        // 0x1c728c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7288) {
            ctx->pc = 0x1C7294u;
            goto label_1c7294;
        }
    }
    ctx->pc = 0x1C7290u;
label_1c7290:
    // 0x1c7290: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c7294:
    // 0x1c7294: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7298: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c729c: 0x14620139  bne         $v1, $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1C729Cu;
    {
        const bool branch_taken_0x1c729c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C729Cu;
        // 0x1c72a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c729c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C72A4u;
    // 0x1c72a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c72a8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c72ac: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c72acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c72b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c72b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c72b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c72b8: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c72b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c72bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c72bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c72c0: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c72c4: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c72c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c72c8: 0x1440012e  bnez        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x1C72C8u;
    {
        const bool branch_taken_0x1c72c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c72c8) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C72D0u;
    // 0x1c72d0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c72d4: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x1C72D4u;
    {
        const bool branch_taken_0x1c72d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72D4u;
        // 0x1c72d8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72d4) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C72DCu;
label_1c72dc:
    // 0x1c72dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c72dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72e0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C72E0u;
    SET_GPR_U32(ctx, 31, 0x1C72E8u);
    ctx->pc = 0x1C72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72E0u;
    // 0x1c72e4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C72E0u, 0x1C72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72E8u;
label_1c72e8:
    // 0x1c72e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c72e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72ec: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C72ECu;
    SET_GPR_U32(ctx, 31, 0x1C72F4u);
    ctx->pc = 0x1C72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72ECu;
    // 0x1c72f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C72ECu, 0x1C72F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72F4u;
label_1c72f4:
    // 0x1c72f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c72f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c72f8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C72F8u;
    SET_GPR_U32(ctx, 31, 0x1C7300u);
    ctx->pc = 0x1C72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72F8u;
    // 0x1c72fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C72F8u, 0x1C7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7300u;
label_1c7300:
    // 0x1c7300: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7304: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c7304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7308: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C7308u;
    SET_GPR_U32(ctx, 31, 0x1C7310u);
    ctx->pc = 0x1C730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7308u;
    // 0x1c730c: 0x24a520f0  addiu       $a1, $a1, 0x20F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C7308u, 0x1C7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7310u;
label_1c7310:
    // 0x1c7310: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c7314: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x1C7314u;
    {
        const bool branch_taken_0x1c7314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7314u;
        // 0x1c7318: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7314) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C731Cu;
label_1c731c:
    // 0x1c731c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7320: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7320u;
    SET_GPR_U32(ctx, 31, 0x1C7328u);
    ctx->pc = 0x1C7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7320u;
    // 0x1c7324: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7320u, 0x1C7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7328u;
label_1c7328:
    // 0x1c7328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c732c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C732Cu;
    SET_GPR_U32(ctx, 31, 0x1C7334u);
    ctx->pc = 0x1C7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C732Cu;
    // 0x1c7330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C732Cu, 0x1C7334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7334u;
label_1c7334:
    // 0x1c7334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7338: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7338u;
    SET_GPR_U32(ctx, 31, 0x1C7340u);
    ctx->pc = 0x1C733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7338u;
    // 0x1c733c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7338u, 0x1C7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7340u;
label_1c7340:
    // 0x1c7340: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c7340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c7344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7348: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7348u;
    {
        const bool branch_taken_0x1c7348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7348) {
            ctx->pc = 0x1C7370u;
            goto label_1c7370;
        }
    }
    ctx->pc = 0x1C7350u;
    // 0x1c7350: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1c7354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7358: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7358u;
    {
        const bool branch_taken_0x1c7358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7358u;
        // 0x1c735c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7358) {
            ctx->pc = 0x1C736Cu;
            goto label_1c736c;
        }
    }
    ctx->pc = 0x1C7360u;
    // 0x1c7360: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1c7360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c7364: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7364u;
    {
        const bool branch_taken_0x1c7364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7364u;
        // 0x1c7368: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7364) {
            ctx->pc = 0x1C7370u;
            goto label_1c7370;
        }
    }
    ctx->pc = 0x1C736Cu;
label_1c736c:
    // 0x1c736c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c736cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c7370:
    // 0x1c7370: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c7374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7378: 0x14620102  bne         $v1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x1C7378u;
    {
        const bool branch_taken_0x1c7378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7378u;
        // 0x1c737c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7378) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7380u;
    // 0x1c7380: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7384: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c7388: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c7388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c738c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c7390: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7394: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c7394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c7398: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c739c: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c73a0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c73a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c73a4: 0x144000f7  bnez        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1C73A4u;
    {
        const bool branch_taken_0x1c73a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c73a4) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C73ACu;
    // 0x1c73ac: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c73b0: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1C73B0u;
    {
        const bool branch_taken_0x1c73b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73B0u;
        // 0x1c73b4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73b0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C73B8u;
label_1c73b8:
    // 0x1c73b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73bc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73BCu;
    SET_GPR_U32(ctx, 31, 0x1C73C4u);
    ctx->pc = 0x1C73C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73BCu;
    // 0x1c73c0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73BCu, 0x1C73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73C4u;
label_1c73c4:
    // 0x1c73c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73c8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73C8u;
    SET_GPR_U32(ctx, 31, 0x1C73D0u);
    ctx->pc = 0x1C73CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73C8u;
    // 0x1c73cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73C8u, 0x1C73D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73D0u;
label_1c73d0:
    // 0x1c73d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73d4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73D4u;
    SET_GPR_U32(ctx, 31, 0x1C73DCu);
    ctx->pc = 0x1C73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73D4u;
    // 0x1c73d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73D4u, 0x1C73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73DCu;
label_1c73dc:
    // 0x1c73dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c73dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c73e0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c73e4: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C73E4u;
    SET_GPR_U32(ctx, 31, 0x1C73ECu);
    ctx->pc = 0x1C73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73E4u;
    // 0x1c73e8: 0x24a520f0  addiu       $a1, $a1, 0x20F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C73E4u, 0x1C73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73ECu;
label_1c73ec:
    // 0x1c73ec: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1c73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c73f0: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1C73F0u;
    {
        const bool branch_taken_0x1c73f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73F0u;
        // 0x1c73f4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73f0) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C73F8u;
label_1c73f8:
    // 0x1c73f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c73f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73fc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C73FCu;
    SET_GPR_U32(ctx, 31, 0x1C7404u);
    ctx->pc = 0x1C7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73FCu;
    // 0x1c7400: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C73FCu, 0x1C7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7404u;
label_1c7404:
    // 0x1c7404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7408: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7408u;
    SET_GPR_U32(ctx, 31, 0x1C7410u);
    ctx->pc = 0x1C740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7408u;
    // 0x1c740c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7408u, 0x1C7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7410u;
label_1c7410:
    // 0x1c7410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7414: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7414u;
    SET_GPR_U32(ctx, 31, 0x1C741Cu);
    ctx->pc = 0x1C7418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7414u;
    // 0x1c7418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7414u, 0x1C741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C741Cu;
label_1c741c:
    // 0x1c741c: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7420: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7424: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7424u;
    {
        const bool branch_taken_0x1c7424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7424) {
            ctx->pc = 0x1C744Cu;
            goto label_1c744c;
        }
    }
    ctx->pc = 0x1C742Cu;
    // 0x1c742c: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c7430: 0x240235e0  addiu       $v0, $zero, 0x35E0
    ctx->pc = 0x1c7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    // 0x1c7434: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7434u;
    {
        const bool branch_taken_0x1c7434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7434u;
        // 0x1c7438: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7434) {
            ctx->pc = 0x1C7448u;
            goto label_1c7448;
        }
    }
    ctx->pc = 0x1C743Cu;
    // 0x1c743c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c7440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7440u;
    {
        const bool branch_taken_0x1c7440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7440u;
        // 0x1c7444: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7440) {
            ctx->pc = 0x1C744Cu;
            goto label_1c744c;
        }
    }
    ctx->pc = 0x1C7448u;
label_1c7448:
    // 0x1c7448: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c744c:
    // 0x1c744c: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7454: 0x146200cb  bne         $v1, $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1C7454u;
    {
        const bool branch_taken_0x1c7454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7454u;
        // 0x1c7458: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7454) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C745Cu;
    // 0x1c745c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7460: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c7464: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c7464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c7468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c746c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7470: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c7470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c7474: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7478: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c7478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c747c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c747cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c7480: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1C7480u;
    {
        const bool branch_taken_0x1c7480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7480) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7488u;
    // 0x1c7488: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c748c: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1C748Cu;
    {
        const bool branch_taken_0x1c748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C748Cu;
        // 0x1c7490: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c748c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7494u;
label_1c7494:
    // 0x1c7494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7498: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7498u;
    SET_GPR_U32(ctx, 31, 0x1C74A0u);
    ctx->pc = 0x1C749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7498u;
    // 0x1c749c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7498u, 0x1C74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74A0u;
label_1c74a0:
    // 0x1c74a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74a4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74A4u;
    SET_GPR_U32(ctx, 31, 0x1C74ACu);
    ctx->pc = 0x1C74A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74A4u;
    // 0x1c74a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74A4u, 0x1C74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74ACu;
label_1c74ac:
    // 0x1c74ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74b0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74B0u;
    SET_GPR_U32(ctx, 31, 0x1C74B8u);
    ctx->pc = 0x1C74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74B0u;
    // 0x1c74b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74B0u, 0x1C74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74B8u;
label_1c74b8:
    // 0x1c74b8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1c74bc: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c74bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c74c0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C74C0u;
    {
        const bool branch_taken_0x1c74c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74C0u;
        // 0x1c74c4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74c0) {
            ctx->pc = 0x1C74D4u;
            goto label_1c74d4;
        }
    }
    ctx->pc = 0x1C74C8u;
    // 0x1c74c8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c74cc: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1C74CCu;
    {
        const bool branch_taken_0x1c74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74CCu;
        // 0x1c74d0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74cc) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C74D4u;
label_1c74d4:
    // 0x1c74d4: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c74d8: 0xc0747ec  jal         func_1D1FB0
    ctx->pc = 0x1C74D8u;
    SET_GPR_U32(ctx, 31, 0x1C74E0u);
    ctx->pc = 0x1C74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74D8u;
    // 0x1c74dc: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB0u, 0x1C74D8u, 0x1C74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74E0u;
label_1c74e0:
    // 0x1c74e0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c74e4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C74E4u;
    {
        const bool branch_taken_0x1c74e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74E4u;
        // 0x1c74e8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74e4) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C74ECu;
label_1c74ec:
    // 0x1c74ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74f0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74F0u;
    SET_GPR_U32(ctx, 31, 0x1C74F8u);
    ctx->pc = 0x1C74F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74F0u;
    // 0x1c74f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74F0u, 0x1C74F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74F8u;
label_1c74f8:
    // 0x1c74f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74fc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74FCu;
    SET_GPR_U32(ctx, 31, 0x1C7504u);
    ctx->pc = 0x1C7500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74FCu;
    // 0x1c7500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74FCu, 0x1C7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7504u;
label_1c7504:
    // 0x1c7504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7508: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7508u;
    SET_GPR_U32(ctx, 31, 0x1C7510u);
    ctx->pc = 0x1C750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7508u;
    // 0x1c750c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7508u, 0x1C7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7510u;
label_1c7510:
    // 0x1c7510: 0x8e0301fc  lw          $v1, 0x1FC($s0)
    ctx->pc = 0x1c7510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x1c7514: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7518: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7518u;
    {
        const bool branch_taken_0x1c7518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7518u;
        // 0x1c751c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7518) {
            ctx->pc = 0x1C7524u;
            goto label_1c7524;
        }
    }
    ctx->pc = 0x1C7520u;
    // 0x1c7520: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c7524:
    // 0x1c7524: 0x8e0301fc  lw          $v1, 0x1FC($s0)
    ctx->pc = 0x1c7524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x1c7528: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c752c: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1C752Cu;
    {
        const bool branch_taken_0x1c752c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C752Cu;
        // 0x1c7530: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c752c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7534u;
    // 0x1c7534: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C7534u;
    {
        const bool branch_taken_0x1c7534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7534u;
        // 0x1c7538: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7534) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C753Cu;
label_1c753c:
    // 0x1c753c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7540: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7540u;
    SET_GPR_U32(ctx, 31, 0x1C7548u);
    ctx->pc = 0x1C7544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7540u;
    // 0x1c7544: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7540u, 0x1C7548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7548u;
label_1c7548:
    // 0x1c7548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c754c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C754Cu;
    SET_GPR_U32(ctx, 31, 0x1C7554u);
    ctx->pc = 0x1C7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C754Cu;
    // 0x1c7550: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C754Cu, 0x1C7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7554u;
label_1c7554:
    // 0x1c7554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7558: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7558u;
    SET_GPR_U32(ctx, 31, 0x1C7560u);
    ctx->pc = 0x1C755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7558u;
    // 0x1c755c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7558u, 0x1C7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7560u;
label_1c7560:
    // 0x1c7560: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1c7560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1c7564: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c7564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c7568: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7568u;
    {
        const bool branch_taken_0x1c7568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7568u;
        // 0x1c756c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7568) {
            ctx->pc = 0x1C757Cu;
            goto label_1c757c;
        }
    }
    ctx->pc = 0x1C7570u;
    // 0x1c7570: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c7570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c7574: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1C7574u;
    {
        const bool branch_taken_0x1c7574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7574u;
        // 0x1c7578: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7574) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C757Cu;
label_1c757c:
    // 0x1c757c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7580: 0xc0748c8  jal         func_1D2320
    ctx->pc = 0x1C7580u;
    SET_GPR_U32(ctx, 31, 0x1C7588u);
    ctx->pc = 0x1C7584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7580u;
    // 0x1c7584: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2320u, 0x1C7580u, 0x1C7588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7588u;
label_1c7588:
    // 0x1c7588: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c758c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1C758Cu;
    {
        const bool branch_taken_0x1c758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C758Cu;
        // 0x1c7590: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c758c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7594u;
label_1c7594:
    // 0x1c7594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7598: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7598u;
    SET_GPR_U32(ctx, 31, 0x1C75A0u);
    ctx->pc = 0x1C759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7598u;
    // 0x1c759c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7598u, 0x1C75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75A0u;
label_1c75a0:
    // 0x1c75a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75a4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75A4u;
    SET_GPR_U32(ctx, 31, 0x1C75ACu);
    ctx->pc = 0x1C75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75A4u;
    // 0x1c75a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75A4u, 0x1C75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75ACu;
label_1c75ac:
    // 0x1c75ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75b0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75B0u;
    SET_GPR_U32(ctx, 31, 0x1C75B8u);
    ctx->pc = 0x1C75B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75B0u;
    // 0x1c75b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75B0u, 0x1C75B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75B8u;
label_1c75b8:
    // 0x1c75b8: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1c75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1c75bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c75c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C75C0u;
    {
        const bool branch_taken_0x1c75c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75C0u;
        // 0x1c75c4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75c0) {
            ctx->pc = 0x1C75CCu;
            goto label_1c75cc;
        }
    }
    ctx->pc = 0x1C75C8u;
    // 0x1c75c8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c75cc:
    // 0x1c75cc: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1c75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1c75d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c75d4: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1C75D4u;
    {
        const bool branch_taken_0x1c75d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75D4u;
        // 0x1c75d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75d4) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C75DCu;
    // 0x1c75dc: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1C75DCu;
    {
        const bool branch_taken_0x1c75dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75DCu;
        // 0x1c75e0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75dc) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C75E4u;
label_1c75e4:
    // 0x1c75e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75E8u;
    SET_GPR_U32(ctx, 31, 0x1C75F0u);
    ctx->pc = 0x1C75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75E8u;
    // 0x1c75ec: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75E8u, 0x1C75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75F0u;
label_1c75f0:
    // 0x1c75f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75f4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75F4u;
    SET_GPR_U32(ctx, 31, 0x1C75FCu);
    ctx->pc = 0x1C75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75F4u;
    // 0x1c75f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75F4u, 0x1C75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75FCu;
label_1c75fc:
    // 0x1c75fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7600: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7600u;
    SET_GPR_U32(ctx, 31, 0x1C7608u);
    ctx->pc = 0x1C7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7600u;
    // 0x1c7604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7600u, 0x1C7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7608u;
label_1c7608:
    // 0x1c7608: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1c7608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1c760c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1c760cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1c7610: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7610u;
    {
        const bool branch_taken_0x1c7610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7610u;
        // 0x1c7614: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7610) {
            ctx->pc = 0x1C7624u;
            goto label_1c7624;
        }
    }
    ctx->pc = 0x1C7618u;
    // 0x1c7618: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c7618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c761c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C761Cu;
    {
        const bool branch_taken_0x1c761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C761Cu;
        // 0x1c7620: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c761c) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7624u;
label_1c7624:
    // 0x1c7624: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C7624u;
    {
        const bool branch_taken_0x1c7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7624u;
        // 0x1c7628: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7624) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C762Cu;
label_1c762c:
    // 0x1c762c: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C762Cu;
    SET_GPR_U32(ctx, 31, 0x1C7634u);
    ctx->pc = 0x1C7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C762Cu;
    // 0x1c7630: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C762Cu, 0x1C7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7634u;
label_1c7634:
    // 0x1c7634: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1c7634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c7638: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1C7638u;
    {
        const bool branch_taken_0x1c7638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7638u;
        // 0x1c763c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7638) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7640u;
label_1c7640:
    // 0x1c7640: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C7640u;
    SET_GPR_U32(ctx, 31, 0x1C7648u);
    ctx->pc = 0x1C7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7640u;
    // 0x1c7644: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C7640u, 0x1C7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7648u;
label_1c7648:
    // 0x1c7648: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C7648u;
    {
        const bool branch_taken_0x1c7648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7648) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7650u;
    // 0x1c7650: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1c7650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1c7654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7658: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7658u;
    {
        const bool branch_taken_0x1c7658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7658u;
        // 0x1c765c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7658) {
            ctx->pc = 0x1C766Cu;
            goto label_1c766c;
        }
    }
    ctx->pc = 0x1C7660u;
    // 0x1c7660: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c7660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c7664: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C7664u;
    {
        const bool branch_taken_0x1c7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7664u;
        // 0x1c7668: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7664) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C766Cu;
label_1c766c:
    // 0x1c766c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c766cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c7670: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1c7674: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C7674u;
    {
        const bool branch_taken_0x1c7674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7674) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C767Cu;
    // 0x1c767c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c7680: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7680u;
    {
        const bool branch_taken_0x1c7680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7680u;
        // 0x1c7684: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7680) {
            ctx->pc = 0x1C76B8u;
            goto label_1c76b8;
        }
    }
    ctx->pc = 0x1C7688u;
    // 0x1c7688: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c768c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C768Cu;
    {
        const bool branch_taken_0x1c768c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C768Cu;
        // 0x1c7690: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c768c) {
            ctx->pc = 0x1C76ACu;
            goto label_1c76ac;
        }
    }
    ctx->pc = 0x1C7694u;
    // 0x1c7694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c7694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7698: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7698u;
    {
        const bool branch_taken_0x1c7698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7698) {
            ctx->pc = 0x1C76A8u;
            goto label_1c76a8;
        }
    }
    ctx->pc = 0x1C76A0u;
    // 0x1c76a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C76B4u;
            goto label_1c76b4;
        }
    }
    ctx->pc = 0x1C76A8u;
label_1c76a8:
    // 0x1c76a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c76ac:
    // 0x1c76ac: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C76ACu;
    {
        const bool branch_taken_0x1c76ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76ACu;
        // 0x1c76b0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76ac) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C76B4u;
label_1c76b4:
    // 0x1c76b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c76b8:
    // 0x1c76b8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C76B8u;
    {
        const bool branch_taken_0x1c76b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76B8u;
        // 0x1c76bc: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76b8) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C76C0u;
label_1c76c0:
    // 0x1c76c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76c4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C76C4u;
    SET_GPR_U32(ctx, 31, 0x1C76CCu);
    ctx->pc = 0x1C76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76C4u;
    // 0x1c76c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C76C4u, 0x1C76CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76CCu;
label_1c76cc:
    // 0x1c76cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C76D0u;
    SET_GPR_U32(ctx, 31, 0x1C76D8u);
    ctx->pc = 0x1C76D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76D0u;
    // 0x1c76d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C76D0u, 0x1C76D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76D8u;
label_1c76d8:
    // 0x1c76d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76dc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C76DCu;
    SET_GPR_U32(ctx, 31, 0x1C76E4u);
    ctx->pc = 0x1C76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76DCu;
    // 0x1c76e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C76DCu, 0x1C76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76E4u;
label_1c76e4:
    // 0x1c76e4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c76e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c76e8: 0xc06d000  jal         func_1B4000
    ctx->pc = 0x1C76E8u;
    SET_GPR_U32(ctx, 31, 0x1C76F0u);
    ctx->pc = 0x1C76ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76E8u;
    // 0x1c76ec: 0x8c24ca84  lw          $a0, -0x357C($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4000u, 0x1C76E8u, 0x1C76F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76F0u;
label_1c76f0:
    // 0x1c76f0: 0xc07318c  jal         func_1CC630
    ctx->pc = 0x1C76F0u;
    SET_GPR_U32(ctx, 31, 0x1C76F8u);
    ctx->pc = 0x1CC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC630u, 0x1C76F0u, 0x1C76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76F8u;
label_1c76f8:
    // 0x1c76f8: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c76f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c76fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c7700: 0x8c26ca84  lw          $a2, -0x357C($at)
    ctx->pc = 0x1c7700u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c7704: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7708: 0x24a52110  addiu       $a1, $a1, 0x2110
    ctx->pc = 0x1c7708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8464));
    // 0x1c770c: 0xc074ad4  jal         func_1D2B50
    ctx->pc = 0x1C770Cu;
    SET_GPR_U32(ctx, 31, 0x1C7714u);
    ctx->pc = 0x1C7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C770Cu;
    // 0x1c7710: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2B50u, 0x1C770Cu, 0x1C7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7714u;
label_1c7714:
    // 0x1c7714: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c7714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c7718: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C7718u;
    {
        const bool branch_taken_0x1c7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7718u;
        // 0x1c771c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7718) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7720u;
label_1c7720:
    // 0x1c7720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7724: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7724u;
    SET_GPR_U32(ctx, 31, 0x1C772Cu);
    ctx->pc = 0x1C7728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7724u;
    // 0x1c7728: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7724u, 0x1C772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C772Cu;
label_1c772c:
    // 0x1c772c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7730: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7730u;
    SET_GPR_U32(ctx, 31, 0x1C7738u);
    ctx->pc = 0x1C7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7730u;
    // 0x1c7734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7730u, 0x1C7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7738u;
label_1c7738:
    // 0x1c7738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c773c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C773Cu;
    SET_GPR_U32(ctx, 31, 0x1C7744u);
    ctx->pc = 0x1C7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C773Cu;
    // 0x1c7740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C773Cu, 0x1C7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7744u;
label_1c7744:
    // 0x1c7744: 0x8e03022c  lw          $v1, 0x22C($s0)
    ctx->pc = 0x1c7744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1c7748: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c774c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C774Cu;
    {
        const bool branch_taken_0x1c774c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C774Cu;
        // 0x1c7750: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c774c) {
            ctx->pc = 0x1C7758u;
            goto label_1c7758;
        }
    }
    ctx->pc = 0x1C7754u;
    // 0x1c7754: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_1c7758:
    // 0x1c7758: 0x8e03022c  lw          $v1, 0x22C($s0)
    ctx->pc = 0x1c7758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1c775c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7760: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C7760u;
    {
        const bool branch_taken_0x1c7760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7760u;
        // 0x1c7764: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7760) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7768u;
    // 0x1c7768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7768u;
    {
        const bool branch_taken_0x1c7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7768u;
        // 0x1c776c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7768) {
            ctx->pc = 0x1C7784u;
            goto label_1c7784;
        }
    }
    ctx->pc = 0x1C7770u;
label_1c7770:
    // 0x1c7770: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c7774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7778: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c777c: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C777Cu;
    SET_GPR_U32(ctx, 31, 0x1C7784u);
    ctx->pc = 0x1C7780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C777Cu;
    // 0x1c7780: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C777Cu, 0x1C7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7784u;
label_1c7784:
    // 0x1c7784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7788:
    // 0x1c7788: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C7788u;
    SET_GPR_U32(ctx, 31, 0x1C7790u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C7788u, 0x1C7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7790u;
label_1c7790:
    // 0x1c7790: 0xc07460c  jal         func_1D1830
    ctx->pc = 0x1C7790u;
    SET_GPR_U32(ctx, 31, 0x1C7798u);
    ctx->pc = 0x1C7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7790u;
    // 0x1c7794: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1830u, 0x1C7790u, 0x1C7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7798u;
label_1c7798:
    // 0x1c7798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c779c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c779cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77A0u;
        // 0x1c77a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77A8u;
}
