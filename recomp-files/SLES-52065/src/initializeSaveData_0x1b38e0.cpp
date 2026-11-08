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

// Function: initializeSaveData
// Address: 0x1b38e0 - 0x1b3ab8
void initializeSaveData_0x1b38e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initializeSaveData_0x1b38e0");
#endif

    switch (ctx->pc) {
        case 0x1b3914u: goto label_1b3914;
        case 0x1b3920u: goto label_1b3920;
        case 0x1b3964u: goto label_1b3964;
        case 0x1b3978u: goto label_1b3978;
        case 0x1b3994u: goto label_1b3994;
        case 0x1b39a0u: goto label_1b39a0;
        case 0x1b3a08u: goto label_1b3a08;
        case 0x1b3a38u: goto label_1b3a38;
        case 0x1b3a44u: goto label_1b3a44;
        case 0x1b3a70u: goto label_1b3a70;
        case 0x1b3a7cu: goto label_1b3a7c;
        default: break;
    }

    ctx->pc = 0x1b38e0u;

    // 0x1b38e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b38e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b38e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b38e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b38ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b38ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b38f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b38f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b38f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b38f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b38f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b38fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b38fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3900: 0x8c822780  lw          $v0, 0x2780($a0)
    ctx->pc = 0x1b3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10112)));
    // 0x1b3904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3904u;
    {
        const bool branch_taken_0x1b3904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3904) {
            ctx->pc = 0x1B3914u;
            goto label_1b3914;
        }
    }
    ctx->pc = 0x1B390Cu;
    // 0x1b390c: 0xc06cef8  jal         func_1B3BE0
    ctx->pc = 0x1B390Cu;
    SET_GPR_U32(ctx, 31, 0x1B3914u);
    ctx->pc = 0x1B3BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3BE0u, 0x1B390Cu, 0x1B3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3914u;
label_1b3914:
    // 0x1b3914: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1b3914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1b3918: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B3918u;
    SET_GPR_U32(ctx, 31, 0x1B3920u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B3918u, 0x1B3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3920u;
label_1b3920:
    // 0x1b3920: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3920u;
    {
        const bool branch_taken_0x1b3920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3920) {
            ctx->pc = 0x1B3948u;
            goto label_1b3948;
        }
    }
    ctx->pc = 0x1B3928u;
    // 0x1b3928: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b3928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b392c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b392cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b3930: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1b3930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1b3934: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x1b3934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3938: 0xa0430049  sb          $v1, 0x49($v0)
    ctx->pc = 0x1b3938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b393c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1b3940: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x1b3940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3944: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x1b3944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_1b3948:
    // 0x1b3948: 0xae822780  sw          $v0, 0x2780($s4)
    ctx->pc = 0x1b3948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10112), GPR_U32(ctx, 2));
    // 0x1b394c: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3950: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3954: 0x24a50cc0  addiu       $a1, $a1, 0xCC0
    ctx->pc = 0x1b3954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    // 0x1b3958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b3958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b395c: 0xc06cfa0  jal         func_1B3E80
    ctx->pc = 0x1B395Cu;
    SET_GPR_U32(ctx, 31, 0x1B3964u);
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x1B395Cu, 0x1B3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3964u;
label_1b3964:
    // 0x1b3964: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b3964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3968: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b396c: 0x24a50cc8  addiu       $a1, $a1, 0xCC8
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3272));
    // 0x1b3970: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1B3970u;
    SET_GPR_U32(ctx, 31, 0x1B3978u);
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1B3970u, 0x1B3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3978u;
label_1b3978:
    // 0x1b3978: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b397c: 0x6010001  bgez        $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B397Cu;
    {
        const bool branch_taken_0x1b397c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b397c) {
            ctx->pc = 0x1B3984u;
            goto label_1b3984;
        }
    }
    ctx->pc = 0x1B3984u;
label_1b3984:
    // 0x1b3984: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b3988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b398c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B398Cu;
    {
        const bool branch_taken_0x1b398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b398c) {
            ctx->pc = 0x1B3A20u;
            goto label_1b3a20;
        }
    }
    ctx->pc = 0x1B3994u;
label_1b3994:
    // 0x1b3994: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b3994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3998: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B3998u;
    {
        const bool branch_taken_0x1b3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3998) {
            ctx->pc = 0x1B3A0Cu;
            goto label_1b3a0c;
        }
    }
    ctx->pc = 0x1B39A0u;
label_1b39a0:
    // 0x1b39a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b39a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b39a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b39a8: 0x8e822780  lw          $v0, 0x2780($s4)
    ctx->pc = 0x1b39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b39ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b39acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b39b0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b39b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b39b8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39bc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1b39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b39c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b39c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39c4: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x1b39c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1b39c8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1b39c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b39cc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39d0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1b39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1b39d4: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1b39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b39d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b39dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b39e4: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1b39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1b39e8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1b39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1b39ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1b39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b39f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b39f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b39f8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1b39f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b39fc: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1b3a00: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1B3A00u;
    SET_GPR_U32(ctx, 31, 0x1B3A08u);
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1B3A00u, 0x1B3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A08u;
label_1b3a08:
    // 0x1b3a08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b3a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b3a0c:
    // 0x1b3a0c: 0x0  nop
    ctx->pc = 0x1b3a0cu;
    // NOP
    // 0x1b3a10: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1b3a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b3a14: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B3A14u;
    {
        const bool branch_taken_0x1b3a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a14) {
            ctx->pc = 0x1B39A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b39a0;
        }
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b3a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b3a20:
    // 0x1b3a20: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x1b3a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b3a24: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B3A24u;
    {
        const bool branch_taken_0x1b3a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a24) {
            ctx->pc = 0x1B3994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3994;
        }
    }
    ctx->pc = 0x1B3A2Cu;
    // 0x1b3a2c: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3a30: 0xc06cff0  jal         func_1B3FC0
    ctx->pc = 0x1B3A30u;
    SET_GPR_U32(ctx, 31, 0x1B3A38u);
    ctx->pc = 0x1B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FC0u, 0x1B3A30u, 0x1B3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A38u;
label_1b3a38:
    // 0x1b3a38: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3a3c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B3A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A44u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B3A3Cu, 0x1B3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A44u;
label_1b3a44:
    // 0x1b3a44: 0xae802780  sw          $zero, 0x2780($s4)
    ctx->pc = 0x1b3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10112), GPR_U32(ctx, 0));
    // 0x1b3a48: 0xa68028da  sh          $zero, 0x28DA($s4)
    ctx->pc = 0x1b3a48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10458), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3a4c: 0xae8028e4  sw          $zero, 0x28E4($s4)
    ctx->pc = 0x1b3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10468), GPR_U32(ctx, 0));
    // 0x1b3a50: 0xa6802828  sh          $zero, 0x2828($s4)
    ctx->pc = 0x1b3a50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10280), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3a54: 0xa280282c  sb          $zero, 0x282C($s4)
    ctx->pc = 0x1b3a54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10284), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a58: 0xa280282b  sb          $zero, 0x282B($s4)
    ctx->pc = 0x1b3a58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10283), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a5c: 0xa280282a  sb          $zero, 0x282A($s4)
    ctx->pc = 0x1b3a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10282), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a60: 0xae802830  sw          $zero, 0x2830($s4)
    ctx->pc = 0x1b3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10288), GPR_U32(ctx, 0));
    // 0x1b3a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a68: 0xc06cebc  jal         func_1B3AF0
    ctx->pc = 0x1B3A68u;
    SET_GPR_U32(ctx, 31, 0x1B3A70u);
    ctx->pc = 0x1B3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3AF0u, 0x1B3A68u, 0x1B3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A70u;
label_1b3a70:
    // 0x1b3a70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a74: 0xc06ceb0  jal         func_1B3AC0
    ctx->pc = 0x1B3A74u;
    SET_GPR_U32(ctx, 31, 0x1B3A7Cu);
    ctx->pc = 0x1B3AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3AC0u, 0x1B3A74u, 0x1B3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A7Cu;
label_1b3a7c:
    // 0x1b3a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3a80: 0xa2830010  sb          $v1, 0x10($s4)
    ctx->pc = 0x1b3a80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3a84: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1b3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b3a88: 0xa2830011  sb          $v1, 0x11($s4)
    ctx->pc = 0x1b3a88u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3a8c: 0xa2830012  sb          $v1, 0x12($s4)
    ctx->pc = 0x1b3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3a90: 0xa2800013  sb          $zero, 0x13($s4)
    ctx->pc = 0x1b3a90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b3a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3a98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b3a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3a9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3aac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b3aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3AB8u;
}
